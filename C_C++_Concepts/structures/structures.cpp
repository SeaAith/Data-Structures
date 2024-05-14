#include<iostream>

using namespace std;

struct Rectangle {
    int length = 5;
    int height = 10;
};

int main() {
    struct Rectangle r = {15, 20};

    cout << "Area of the rectangle is: " << r.height * r.length << endl;
    return 0;
}