#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int width;
};


int main () {
    Rectangle *P;

    P = new Rectangle();

    P -> length = 10;
    P -> width = 15;

    cout << P->length << endl << P->width << endl;

    return 0; 
}

// int main () {
//     Rectangle r = {5, 10};
//     Rectangle *P = &r;

//     r.length = 15;

//     cout << r.length << endl;

//     (*P).length = 20;

//     cout << r.length << endl;

//     P -> length = 10;

//     cout << r.length << endl;

//     return 0;
// }