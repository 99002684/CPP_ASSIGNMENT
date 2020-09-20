#include<iostream>
#include "math.h"
#include "point.h"
Point::Point():
    m_x(0), m_y(0) {
}
Point::Point(int a, int b):
    m_x(A),m_y(B) {
}
Point::Point(const Point& ref) :
    m_x(ref.m_x), m_y(ref.m_y) {
}
void Point::distanceFromOrigin(int a,int b) {
    int d =(sqrt(A^2 + B^2));
    std::cout << "distance from Origin is" << d << "\n";
}
void Point::quadrant(Quadrant x) {
    switch(x)
    {
        case q1:
            cout<<"First Quadrant";
            break;
        case q2:
            cout<<"Second Quadrant";
            break;
        case q3:
            cout<<"Third Quadrant";
            break;
        default:
            cout<<"Fourth Quadrant";
            break;
    }

}

void Point::isOrigin(int a,int b) {
    if(A==0 && B==0)
        std::cout << "Point is on the Origin";
}

void Point::isOnXAxis(int a,int b) {
    if(B==0)
        std::cout << "Point lies on X axis";
}

void Point::isOnYAxis(int a,int b) {
    if(A==0)
        std::cout << "Point lies on Y axis";
}

void Point::display() {
    std::cout << m_x << "," << m_y << "\n";
}

int main(){

return 0;}

