// SmatrPointer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "SmartPointer.h"
using namespace std;

class Point3D
{
    float x, y , z;
    public:
    Point3D(float x, float y, float z) : x{x}, y{y}, z{z}{}
    friend ostream &operator << (ostream &out, const Point3D &point)
    {
        return out << point.x << ' '<< point.x<< ' '<<point.z;
    }
};
int main()
{
    SmartPointer<double> ptr { new double{ 5 } };
    cout << *ptr<< endl;

    SmartPointer<Point3D> p3d = new Point3D {2, 3, 4};
    cout << *p3d << endl;


}

