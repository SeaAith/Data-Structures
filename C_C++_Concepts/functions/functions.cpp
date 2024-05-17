#include<iostream>

using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

    int mul(int num1, int num2) {
        return num1 * num2;
    }

//using references to functions
int main () {
    
    int a, b;

    cout << "Type a number: "; 
    cin >> a;
    cout << "Type another number: ";
    cin >> b;

    int (*fn)(int, int) = (a > b) ? add : mul;
    cout << fn(a, b);

    return 0;
}


//using callback reference as a parameter
// void swap (int & x, int  & y) {
//     int temp = x;

//     x = y;
//     y = temp;

// }
// int main () {
//     int x = 5, y = 10;

//     cout << "X is: " << x << endl;
//     cout << "Y is: " << y << endl;

//     swap(x, y);
//     cout << "Numbers were swapped." << endl;

//     cout << "X is: " << x << endl;
//     cout << "Y is: " << y << endl;

// }


//using pointers to send adresses to function
// void swap (int * x, int  * y) {
//     int temp = *x;

//     *x = *y;
//     *y = temp;

// }
// int main () {
//     int x = 5, y = 10;

//     cout << "X is: " << x << endl;
//     cout << "Y is: " << y << endl;

//     swap(&x, &y);
//     cout << "Numbers were swapped." << endl;

//     cout << "X is: " << x << endl;
//     cout << "Y is: " << y << endl;

// }


//basic add function
// int add (int a, int b) {

//     int res = a + b;

//     return res;
// }

// int main (){

//     int x, y, z;

//     x = 5;
//     y = 10;

//     z = add(x, y);

//     cout<<"Sum is: " << z << endl;

//     return 0;
// }