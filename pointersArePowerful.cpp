//
//  pointersArePowerful.cpp
//  Module 3
//
//  Created by Navjot Thind on 2/17/25.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    // Pointer Basics
    int num1 = 22;
    int* myIntPointer = &num1;

    cout << "\nWelcome to Pointer Basics!\n";
    cout << "\nThe value of num1 is: " << num1 << "\n";
    cout << "\nThe address stored in myIntPointer is: " << myIntPointer << "\n";
    cout << "\nThe value of num1 using myIntPointer: " << *myIntPointer << "\n";

    *myIntPointer = 57;  // Modify value using pointer
    cout << "\nUpdated value of num1: " << num1 << "\n";

    // Pointer Arithmetic
    int arr[5] = {2, 4, 6, 8, 10};
    int* myPtr = arr; // Points to first element

    cout << "\nWelcome to Pointer Arithmetic!\n";
    for (int i = 0; i < 5; ++i) {
        cout << "\nAddress of arr[" << i << "] is: " << (myPtr + i);
        cout << "\nValue of arr[" << i << "] is: " << *(myPtr + i) << "\n";
    }

    return 0;
}
