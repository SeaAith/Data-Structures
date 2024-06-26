#include <iostream>

using namespace std;

class Rectangle {
private:
    int Height; 
    int Width;

public:
    Rectangle() {
        Height = 0;
        Width = 0;
    }
    Rectangle(int height, int width) {
        Height = height;
        Width = width;
    }

    int Area() {
        return Height * Width;
    }
    int Perimeter() {
        return 2 * (Height + Width);
    }

    int GetHeight() {
        return Height;
    }
    int GetWidth() {
        return Width;
    }

    void SetHeight(int newHeight) {
        Height = newHeight;
    }
    void SetWidth(int newWidth) {
        Width = newWidth;
    }
};

int main () {
    Rectangle r = Rectangle(10, 5);

    cout << "Rectangle measurements are: " << endl << "Height:" << r.GetHeight() << endl << "Width: " << r.GetWidth() << endl;
    cout << "Rectangle area is: " << r.Area() << endl;
    cout << "Rectangle perimeter is: " << r.Perimeter() << endl;

    return 0;
}