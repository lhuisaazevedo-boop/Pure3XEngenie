#pragma once

class Matrix4 {
public:
    float m[16];

    Matrix4();

    void Identity();

    static Matrix4 Translation(float x, float y, float z);

    static Matrix4 Scale(float x, float y, float z);

    static Matrix4 RotationX(float angle);

    static Matrix4 RotationY(float angle);

    static Matrix4 RotationZ(float angle);
};
