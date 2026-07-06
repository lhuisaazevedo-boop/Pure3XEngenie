package com.pure3x.engine;

import android.opengl.GLES30;
import android.opengl.GLSurfaceView;
import android.opengl.Matrix;
import android.util.Log;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class Pure3XRenderer implements GLSurfaceView.Renderer {

    private static final String TAG = "Pure3XRenderer";

    private int shaderProgram;
    private int mvpLocation;

    private FloatBuffer vertexBuffer;

    private final int[] vao = new int[1];
    private final int[] vbo = new int[1];

    private final Pure3XCamera camera = new Pure3XCamera();
    private final Pure3XRuntime runtime = new Pure3XRuntime();

    private final float[] modelMatrix = new float[16];

    private float angle = 0.0f;

    private final String vertexShader =
            "#version 300 es\n" +
            "layout(location = 0) in vec3 aPos;\n" +
            "uniform mat4 uMVP;\n" +
            "void main() {\n" +
            "    gl_Position = uMVP * vec4(aPos, 1.0);\n" +
            "}";

    private final String fragmentShader =
            "#version 300 es\n" +
            "precision mediump float;\n" +
            "out vec4 FragColor;\n" +
            "void main() {\n" +
            "    FragColor = vec4(0.0, 1.0, 0.0, 1.0);\n" +
            "}";

    private final float[] vertices = Pure3XCube.VERTICES;

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {

        Log.i(TAG, "OpenGL ES 3.0 iniciado.");

        runtime.initialize();

        GLES30.glClearColor(0f, 0f, 0f, 1f);
        GLES30.glEnable(GLES30.GL_DEPTH_TEST);

        ByteBuffer bb = ByteBuffer.allocateDirect(vertices.length * 4);
        bb.order(ByteOrder.nativeOrder());

        vertexBuffer = bb.asFloatBuffer();
        vertexBuffer.put(vertices);
        vertexBuffer.position(0);

        shaderProgram = Pure3XShader.createProgram(
                vertexShader,
                fragmentShader
        );

        mvpLocation = GLES30.glGetUniformLocation(shaderProgram, "uMVP");

        GLES30.glGenVertexArrays(1, vao, 0);
        GLES30.glGenBuffers(1, vbo, 0);

        GLES30.glBindVertexArray(vao[0]);

        GLES30.glBindBuffer(GLES30.GL_ARRAY_BUFFER, vbo[0]);
        GLES30.glBufferData(
                GLES30.GL_ARRAY_BUFFER,
                vertices.length * 4,
                vertexBuffer,
                GLES30.GL_STATIC_DRAW
        );

        GLES30.glVertexAttribPointer(
                0,
                3,
                GLES30.GL_FLOAT,
                false,
                3 * 4,
                0
        );

        GLES30.glEnableVertexAttribArray(0);

        GLES30.glBindBuffer(GLES30.GL_ARRAY_BUFFER, 0);
        GLES30.glBindVertexArray(0);
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {
        GLES30.glViewport(0, 0, width, height);
        camera.setProjection(width, height);
    }

    @Override
    public void onDrawFrame(GL10 gl) {

        runtime.update();
        runtime.render();

        angle += 1.0f;

        Matrix.setIdentityM(modelMatrix, 0);

        Matrix.rotateM(
                modelMatrix,
                0,
                angle,
                1.0f,
                1.0f,
                0.0f
        );

        float[] mvp = camera.getMVP(modelMatrix);

        GLES30.glClear(
                GLES30.GL_COLOR_BUFFER_BIT |
                GLES30.GL_DEPTH_BUFFER_BIT
        );

        GLES30.glUseProgram(shaderProgram);

        GLES30.glUniformMatrix4fv(
                mvpLocation,
                1,
                false,
                mvp,
                0
        );

        GLES30.glBindVertexArray(vao[0]);

        GLES30.glDrawArrays(
                GLES30.GL_TRIANGLES,
                0,
                vertices.length / 3
        );

        GLES30.glBindVertexArray(0);
    }

    public float getFPS() {
        return runtime.getFPS();
    }
}

