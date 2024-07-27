#include <iostream>

using namespace std;

int sum (int n) {
    if (n == 0) {
        return 0;
    } else {
        return sum(n-1) + n;
    }
}

int factorial (int n) {
    if (n <= 0) {
        return 1;
    } else {
        return factorial(n-1) * n;
    }
}


int main() {

    int r = sum(5);
    cout << r << endl;

    int f = factorial(5);
    cout << f << endl;

    return 0;
}