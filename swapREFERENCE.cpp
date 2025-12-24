
// 06/11/25

#include <iostream>
using namespace std;

// Function to swap two integers using call by reference
void swapReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    // Input values
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Call the function
    swapReference(a, b);

    cout << "\nAfter swapping (using call by reference):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
