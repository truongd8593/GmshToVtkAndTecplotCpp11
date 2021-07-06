#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

Point::Point(double x, double y, double z, unsigned ident) {
    this -> x     = x;
    this -> y     = y;
    this -> z     = z;
    this -> ident = ident;
}

bool Point::operator==(Point& rhs) const{
    if (abs(this->x - rhs.x) <= 1.0e-9 && abs(this->y - rhs.y) <= 1.0e-9 && abs(this->z - rhs.z) <= 1.0e-9) {
	return true;
    }
    return false;
}

unsigned Point::getId() const{
    return this->ident;
}

Point* Point::setId(unsigned id) {
    this->ident = id;
    return this;
}

double Point::getX() const{
    return this->x;
}

Point* Point::setX(double x) {
    this->x = x;
    return this;
}

double Point::getY() const{
    return this->y;
}

Point* Point::setY(double y) {
    this->y = y;
    return this;
}

double Point::getZ() const{
    return this->z;
}

Point* Point::setZ(double z) {
    this->z = z;
    return this;
}

void Point::print() const
{
    cout << this -> x << " " << this -> y << " " << this -> z << "\n" << endl;
}
