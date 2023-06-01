/**
 *  @file: lab2.cc
 *  @author: Deveric Burigana
 *  @date: May 30, 2023
 *  @brief: Add Description
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isValidTriangle(double side1, double side2, double side3) {
    return (side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2);
}

double calculateTriangleArea(double side1, double side2, double side3) {
    double semiPerimeter = (side1 + side2 + side3) / 2.0;
    double area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
    return area;
}

int main() {
    char choice;
    do {
        double side1, side2, side3;
        cout << "Enter the lengths of the three sides of the triangle: ";
        cin >> side1 >> side2 >> side3;

        if (isValidTriangle(side1, side2, side3)) {
            double area = calculateTriangleArea(side1, side2, side3);
            cout << "The area of the triangle is: " << fixed << setprecision(2) << area << endl;
        } else {
            cout << "Invalid triangle! The sum of any two sides must be greater than the third side." << endl;
        }

        cout << "Do you want to calculate the area of another triangle? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}