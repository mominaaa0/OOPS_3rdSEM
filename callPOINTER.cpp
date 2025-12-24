
// 06/11/25

#include <iostream>
using namespace std;
// Function to swap two numbers using pointers
void swapPointers(int *x, int *y) {
    int temp = *x;  // store the value pointed by x
    *x = *y;        // assign the value pointed by y to x
    *y = temp;      // assign temp to the value pointed by y
}
int main() {
    int a, b;
    // Input values
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "\nBefore swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    // Call the function using addresses of a and b
    swapPointers(&a, &b);
    cout << "\nAfter swapping (using call by pointers):" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
