#include <stdio.h>
#include <iostream>

using namespace std;

int fun (int i) {
    static int x = 0;
    if (i > 0) {
        x++;
        return fun(i-1) + x;

    } else {
        return 0;
    }
}

int main () {

    int r = fun(5);

    cout << r;

    return 0;
}