/*Name: Alex Abere
ADM: BSCIT-05-0063/2024
    VERSION 1
    7/03/2024 */

#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array (matrix) of size 3x3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Display the elements of the 2D matrix
    cout << "Two-dimensional matrix elements: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Accessing an element (for example, the element at row 1, column 2)
    int row = 1;
    int col = 2;
    cout << "Element at position (" << row << ", " << col << ") is: " << matrix[row][col] << endl;

    return 0;
}
