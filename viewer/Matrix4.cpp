#include "Matrix4.h"

#include <cstring>
#include <cmath>

Matrix4::Matrix4() {
    Identity();
}

void Matrix4::Identity() {
    std::memset(m, 0, sizeof(m));

    m[0] = 1.0f;
    m[5] = 1.0f;
    m[10] = 1.0f;
    m[15] = 1.0f;
}

Matrix4 Matrix4::Translation(float x, float y, float z) {
    Matrix4 mat;

    mat.m[12] = x;
    mat.m[13] = y;
    mat.m[14] = z;

    return mat;
}

Matrix4 Matrix4::Scale(float x, float y, float z) {
    Matrix4 mat;

    mat.m[0] = x;
    mat.m[5] = y;
    mat.m[10] = z;

    return mat;
}

Matrix4 Matrix4::RotationX(float angle) {
    Matrix4 mat;

    float c = std::cos(angle);
    float s = std::sin(angle);

    mat.m[5] = c;
    mat.m[6] = s;
    mat.m[9] = -s;
    mat.m[10] = c;

    return mat;
}

Matrix4 Matrix4::RotationY(float angle) {
    Matrix4 mat;

    float c = std::cos(angle);
    float s = std::sin(angle);

    mat.m[0] = c;
    mat.m[2] = -s;
    mat.m[8] = s;
    mat.m[10] = c;

    return mat;
}

Matrix4 Matrix4::RotationZ(float angle) {
    Matrix4 mat;

    float c = std::cos(angle);
    float s = std::sin(angle);

    mat.m[0] = c;
    mat.m[1] = s;
    mat.m[4] = -s;
    mat.m[5] = c;

    return mat;
}
