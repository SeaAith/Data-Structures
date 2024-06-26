#include<iostream>

using namespace std;

//using structs as parameters
struct Rectangle {
    int height;
    int length;
};

//passing struct as value
int area(Rectangle r1) {
    return r1.height * r1.length;
}

//passing struct as a pointer
void changeLength(Rectangle *r1, int newLength) {
    r1->length = newLength;    
}

int main () {
    struct Rectangle r = {10, 5};

    cout << "The area of the rectangle is: " << area(r) << endl;

    cout << "The length of the rectangle is: " << r.length << endl;

    changeLength(&r, 6); 

    cout << "The new length of the rectangle is: " << r.length << endl;

    return 0;
}


//passing arrays as parameters
// int* createArr (int arrSize) {
//     return new int[arrSize];
// }

// void fillArr (int arr[], int arrSize) {
//     for (int i = 0; i < arrSize; i++){
//         cout << "type a number to insert it on the array: ";
//         cin >> arr[i];   
//     }
// }

// void printArr (int arr[], int arrSize) {
//     for (int i = 0; i < arrSize; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main () {
//     int *A;
//     int arrSize = 5;

//     A = createArr(arrSize);

//     fillArr(A, arrSize);

//     cout << "The filled array is: ";
//     printArr(A, arrSize); 

//     delete [] A;

//     return 0;
// }

// //using references to functions
// int add(int num1, int num2) {
//     return num1 + num2;
// }

//     int mul(int num1, int num2) {
//         return num1 * num2;
//     }


// int main () {
    
//     int a, b;

//     cout << "Type a number: "; 
//     cin >> a;
//     cout << "Type another number: ";
//     cin >> b;

//     int (*fn)(int, int) = (a > b) ? add : mul;
//     cout << fn(a, b);

//     return 0;
// }


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


  