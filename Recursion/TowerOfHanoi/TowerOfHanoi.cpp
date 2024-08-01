#include <iostream>

using namespace std;

void ToH(int n, int A, int B, int C) {

    if(n > 0) {
        ToH(n-1, A, C, B);
        cout << "From " << A << " To " << C << endl;
        ToH(n-1, B, A, C);
    }
}

int main() {

    ToH(3, 1, 2, 3);

    return 0;
}