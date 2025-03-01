#include <iostream>
using namespace std;
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
int main() {
    double base, height, length, width;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double triangleArea = calculateTriangleArea(base, height);
    cout << "The area of the triangle is: " << triangleArea << endl;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    double rectangleArea = calculateRectangleArea(length, width);
    cout << "The area of the rectangle is: " << rectangleArea << endl;
    return 0;
}
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}
double calculateRectangleArea(double length, double width) {
    return length * width;
}