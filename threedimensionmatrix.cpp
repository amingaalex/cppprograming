/*Name: Alex Abere
ADM: BSCIT-05-0063/2024
    VERSION 1
    7/03/2024 */
#include <iostream>
using namespace std;

int main() {
    // Declare a 3D array (matrix) of size 3x3x3
    int matrix[3][3][3] = {
        {
            {1, 2, 3}, 
            {4, 5, 6}, 
            {7, 8, 9}
        },
        {
            {10, 11, 12}, 
            {13, 14, 15}, 
            {16, 17, 18}
        },
        {
            {19, 20, 21}, 
            {22, 23, 24}, 
            {25, 26, 27}
        }
    };

    // Display the elements of the 3D matrix
    cout << "Three-dimensional matrix elements: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Layer " << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << matrix[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Accessing a specific element (for example, the element at [1][2][1])
    int x = 1, y = 2, z = 1;
    cout << "Element at position (" << x << ", " << y << ", " << z << ") is: " << matrix[x][y][z] << endl;

    return 0;
}
