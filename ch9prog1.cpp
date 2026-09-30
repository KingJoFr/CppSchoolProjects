/**
 * Question
Actions

Check your answer

(The Rectangle class)

Design a class named Rectangle to represent a rectangle. The class contains:

Two double data fields named width and height that specify the width and height of the rectangle.
A no-arg constructor that creates a rectangle with width 1 and height 1.
A constructor that creates a default rectangle with specified width and height.
The accessor and mutator functions for all the data fields.
A function named getArea() that returns the area of this rectangle.
A function named getPerimeter() that returns the perimeter.
Declare and implement the class. Write a test program that prompts the user to enter the width and height 
of a rectangle, create a Rectangle object and display the width, height, area, and perimeter of the 
rectangle in this order. Put all your code in one file for submission.

Enter the width of a rectangle: 3.5
Enter the height of a rectangle: 35.7
The width of the rectangle is 3.5
The height of the rectangle is 35.7
The area of the rectangle is 124.95000000000002
The perimeter of the rectangle is 78.4
 */

#include<iostream>
using namespace std;

class Rectangle
{
    public:
        Rectangle()
        {
            width = 1;
            height = 1;
        }
        Rectangle(double newWidth, double newHeight)
        {
            width = (newWidth >0) ? newWidth : 1;
            height = (newHeight > 0) ? newHeight: 1;
        }
        double getWidth()
        {
            return width;
        }

        double getHeight()
        {
            return height;
        }
        double getArea()
        {
            return width * height;
        }
        double getPerimeter()
        {
            return 2*width + 2*height;
        }

    private:
        double width;
        double height;

};


int main()
{
    double newHeight;
    double newWidth;

    cout << "Enter the width of a rectangle: "<< endl;
    cin >> newWidth;
    cout << "Enter the height of a rectangle: "<< endl;
    cin >> newHeight;

    Rectangle rect( newWidth, newHeight);
    cout << "The width of the rectangle is " << rect.getWidth() << endl;
    cout << "The height of the rectangle is " << rect.getHeight() << endl;
    cout << "The area of the rectangle is " << rect.getArea() << endl;
    cout << "The perimeter of the rectangle is " << rect.getPerimeter() << endl;
}

