#include <iostream>

using namespace std;

class Rectangle {
    public: int Height; 
    public: int Width;

    public: Rectangle(int height, int width) {
        Height = height;
        Width = width;
    }

    public: int Area() {
        return Height * Width;
    }

    public: void ChangeWidth(int newWidth) {
        Width = newWidth;
    }
};

int main () {
    Rectangle r = Rectangle(10, 5);

    cout << "Height: " << r.Height << endl << "Width: " << r.Width << endl;
    cout << "Rectangle area is: " << r.Area() << endl;

    r.ChangeWidth(15);

    cout << "Height: " << r.Height << endl << "Width: " << r.Width << endl;

    return 0;
}