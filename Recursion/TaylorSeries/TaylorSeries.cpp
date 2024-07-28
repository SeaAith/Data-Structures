#include <iostream>

using namespace std;
//implementation of taylor series
// double e(int x, int n) {
//     static double p = 1, f = 1;
//     if ( n == 0) {
//         return 1;
//     }

//     double r = e(x, n-1);
//     p = p * x;
//     f = f * n;
//     return r + p/f;
// }

//implementation of Taylor Series with Hornet's Rule
double e (int x, int n) {
    static double sum = 1;
    if (n == 0) {
        return sum;
    }
    sum = 1 + x * sum/n ;

    return e(x, n-1);
}

int main () {
    
    double taylor = e(3, 15);

    cout << taylor << endl;

    return 0;
}