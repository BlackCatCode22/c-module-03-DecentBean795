//
//  arraysAreEasy.cpp
//  Module 3
//
//  Created by Navjot Thind on 2/17/25.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    const int X = 2, Y = 3, Z = 4;
    int arr[X][Y][Z];

    // Initialize the 3D array with values based on index sums
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                arr[x][y][z] = x + y + z;
            }
        }
    }

    // Display the 3D array
    cout << "3D Array Values:\n";
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                cout << "arr[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << "\n";
            }
        }
    }

    return 0;
}
