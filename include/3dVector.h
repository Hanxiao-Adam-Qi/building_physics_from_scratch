#pragma once

#include <cmath>

struct Vector3 {
    double x, y, z;

    // 构造函数
    Vector3(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

    // 矢量模长（对应公式 2.2）
    double magnitude() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    // 点积（对应公式 2.3 中的 q ⋅ n）
    double dot(const Vector3& other) const {
        return x * other.x + y * other.y + z * other.z;
    }
};
