#include "geometry.h"

const double PI = 3.141592653589793;

double areaRectangle(double width, double height) {
    return width * height;
}

double areaCircle(double radius) {
    return PI * radius * radius;
}
