#include <iostream>
#include <cmath>

using namespace std;


double triangleArea(double base, double height) {
    return 0.5 * base * height;
}


double rectangleArea(double length, double width) {
    return length * width;
}


double squareArea(double side) {
    return side * side;
}

int main() {
    char choice;

    do {
        cout << "Please select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit program\n";
        cout << "Enter selection: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                double area = squareArea(side);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case '2': {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                double area = rectangleArea(length, width);
                cout << "Area of the rectangle: " << area << endl;
                break;
            }
            case '3': {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                double area = triangleArea(base, height);
                cout << "Area of the triangle: " << area << endl;
                break;
                
            }
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid input. Please enter a valid choice." << endl;
                break;
        }
    } while (choice != '4');

    return 0;
}