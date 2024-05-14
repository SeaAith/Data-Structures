#include <iostream>

using namespace std;

int main () {

    int size;

    cout << "Enter the size of the array:" << endl;
    cin >> size;

    int arr[size];

    cout << "The numbers on the array are:" << endl;

    for(int x: arr ) {
        cout << x << endl;
    }
    
    return 0;
}