#include <iostream>
using namespace std;

int main() {
    // Declare a one-dimensional array (matrix)
    int matrix[5] = {1, 2, 3, 4, 5};

    // Display the elements of the array (matrix)
    cout << "One-dimensional matrix elements: ";
    for (int i = 0; i < 5; i++) {
        cout << matrix[i] << " ";
    }
    cout << endl;

    // Accessing an element (for example, the third element)
    int index = 3; // third element (0-based index)
    cout << "Element at index " << index << " is: " << matrix[index] << endl;

    return 0;
}
