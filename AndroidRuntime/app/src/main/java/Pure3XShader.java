package com.pure3x.engine;

import android.opengl.GLES30;
import android.util.Log;

public class Pure3XShader {

    private static final String TAG = "Pure3XShader";

    public static int loadShader(int type, String source) {

        int shader = GLES30.glCreateShader(type);

        GLES30.glShaderSource(shader, source);
        GLES30.glCompileShader(shader);

        int[] status = new int[1];
        GLES30.glGetShaderiv(
                shader,
                GLES30.GL_COMPILE_STATUS,
                status,
                0
        );

        if (status[0] == 0) {

            Log.e(
                    TAG,
                    GLES30.glGetShaderInfoLog(shader)
            );

            GLES30.glDeleteShader(shader);
            return 0;
        }

        return shader;
    }

    public static int createProgram(
            String vertexShader,
            String fragmentShader) {

        int vertex = loadShader(
                GLES30.GL_VERTEX_SHADER,
                vertexShader);

        int fragment = loadShader(
                GLES30.GL_FRAGMENT_SHADER,
                fragmentShader);

        int program = GLES30.glCreateProgram();

        GLES30.glAttachShader(program, vertex);
        GLES30.glAttachShader(program, fragment);

        GLES30.glLinkProgram(program);

        int[] status = new int[1];

        GLES30.glGetProgramiv(
                program,
                GLES30.GL_LINK_STATUS,
                status,
                0
        );

        if (status[0] == 0) {

            Log.e(
                    TAG,
                    GLES30.glGetProgramInfoLog(program)
            );

            GLES30.glDeleteProgram(program);
            return 0;
        }

        GLES30.glDeleteShader(vertex);
        GLES30.glDeleteShader(fragment);

        return program;
    }
}
