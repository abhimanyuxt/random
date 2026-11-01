
#include <iostream>
using namespace std;

// Volume of Cube
double volume(double side) {
    return side * side * side;
}

// Volume of Cylinder
double volume(double radius, double height) {
    return 3.14 * radius * radius * height;
}

// Volume of Sphere
double volume(double radius, int sphere) {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

int main() {
    double side = 5;
    double radius = 7;
    double height = 4;
    int sphere = 1;

    cout << "Volume of Sphere: " << volume(radius, sphere) << endl;
    cout << "Volume of Cube: " << volume(side) << endl;
    cout << "Volume of Cylinder: " << volume(radius, height) << endl;

    return 0;
}
