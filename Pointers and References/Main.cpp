#include <iostream>
using namespace std;

void Increment(int ptr) {
    ptr++;
    cout << "Inside \"Normal\" Increment, Value: " << ptr << endl;
}

void IncrementP(int* ptr) {
    (*ptr)++;
    cout << "Inside IncrementP, Value: " << *ptr << endl;
}

void IncrementR(int& ref) {
    ref++;
    cout << "Inside IncrementR, Value: " << ref << endl;
}

int main() {
    int x = 10;
    Increment(x);
    cout << "After Normal Increment, Value of x: " << x << endl;
    IncrementP(&x);
    IncrementR(x);
    cout << "Final value of x: " << x << endl;
    return 0;
}
