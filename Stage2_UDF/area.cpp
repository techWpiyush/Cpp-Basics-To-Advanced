/* Overload area() for a circle(radius), rectangle(length, breadth) and a triangle(a,b,c)*/

#include<iostream>
#include<cmath>
using namespace std;

double area(int radius){
    return 3.14 * radius * radius;
}

double area(int length, int breadth){
    return length * breadth;
}

double area(int a, int b, int c){
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(){

    int radius, length, breadth, a, b, c;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << area(length, breadth) << endl;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    cout << "Area of triangle: " << area(a, b, c) << endl;

    return 0;
}

