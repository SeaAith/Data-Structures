#include <iostream>

using namespace std;

int fact(int n) {
    if ( n==0 ) return 1;
    return fact(n-1) * n;
}

int nCr(int n, int r){
    int num, den;

    num = fact(n);
    den = fact(r)*fact(n-r);

    return num/den;
}

int NCR (int n, int r) {
    if(n==r || r == 0) {
        return 1;
    }

    return NCR(n-1, r-1) + NCR(n-1, r);
}

int main () {

    int res1 = nCr(5, 3);

    int res2 = NCR(5, 3);

    cout << res1 << endl;
    cout << res2 << endl;

    return 0;
}