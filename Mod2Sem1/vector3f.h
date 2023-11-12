#pragma once
#include <cmath>
#include <iostream>


namespace mipt {

struct Vector3f 
{
    float x;
    float y;
    float z;
};


// Арифметические операторы, два вектора

Vector3f operator+(Vector3f& a, Vector3f& b) 
{
    Vector3f result = {a.x + b.x, a.y + b.y, a.z + b.z};
    return result;
}

Vector3f operator-(Vector3f& a, Vector3f& b) 
{
    Vector3f result = {a.x - b.x, a.y - b.y, a.z - b.z};
    return result;
}

Vector3f operator*(Vector3f& a, Vector3f& b) 
{
    Vector3f result = {(a.x * b.x) + (a.y * b.y) + (a.z * b.z)};
    return result;
}

// Арифметические операторы, вектор и число

Vector3f operator*(Vector3f& a, float b) 
{
    Vector3f result = {a.x * b, a.y * b, a.z * b};
    return result;
}

Vector3f operator*(float& a, Vector3f& b) 
{
    return b*a;
}

Vector3f operator/(Vector3f& a, float b) 
{
    Vector3f result = {a.x / b, a.y / b, a.z / b};
    return result;
}

// Унарные операторы


Vector3f operator+(Vector3f& a) 
{
    return a;
}

Vector3f operator-(Vector3f& a) 
{
    Vector3f result;
    result.x = -a.x;
    result.y = -a.y;
    result.z = -a.z;
    return result;
}

// Операторы проверки

Vector3f operator==(Vector3f& a, Vector3f& b) 
{
    if ((a.x == a.x) && (a.y == a.y) && (a.z == a.z)) 
        return 1;
}

Vector3f operator!=(Vector3f& a, Vector3f& b) 
{
    if ((a.x != a.x) && (a.y != a.y) && (a.z != a.z)) 
        return 0;
}


// Операторы присваиваний сложения и т. п.


Vector3f operator+=(Vector3f& a, Vector3f& b) 
{
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

Vector3f operator-=(Vector3f& a, Vector3f& b) 
{
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a;
}

Vector3f operator*=(Vector3f& a, float b) 
{
    a.x *= b;
    a.y *= b;
    a.z *= b;
    return a;
}

Vector3f operator/=(Vector3f& a, float b) 
{
    a.x /= b;
    a.y /= b;
    a.z /= b;
    return a;
}


std::ostream& operator<<(std::ostream& out, Vector3f& a) 
{
    out << "(" << a.x << "," << a.y << "," << a.z << ")";
    return out;
}

std::istream& operator>>(std::istream& in, Vector3f& c) 
{
    in >> c.x >> c.y >> c.z;
    return in;
}


// Функции

Vector3f norm(const Vector3f& a) 
{
    int norm;
    norm = std::sqrt((a.x * a.x) + (a.y * a.y) + (a.z * a.z));
    return norm;
}

Vector3f squaredNorm(const Vector3f& a) 
{
    int squaredNorm;
    squaredNorm = (a.x * a.x) + (a.y * a.y) + (a.z * a.z);
    return squaredNorm;
}

Vector3f normalize(const Vector3f& a) 
{
    a.x = a.x / norm(a);
    a.y = a.y / norm(a);
    a.z = a.z / norm(a);
    return a;
}


}