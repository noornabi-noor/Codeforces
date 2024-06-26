#include <iostream>
#include <conio.h>

using namespace std;

// Class to represent a 3x3 matrix
class matrix {
    int m[3][3]; // Matrix elements

public:
    // Function to read matrix elements from user
    void read() {
        cout << "Enter the elements of the 3x3 matrix:\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                cout << "m[" << i << "][" << j << "] = ";
                cin >> m[i][j];
            }
    }

    // Function to display matrix elements
    void display() {
        for (int i = 0; i < 3; i++) {
            cout << "\n";
            for (int j = 0; j < 3; j++) {
                cout << m[i][j] << "\t";
            }
        }
    }

    // Friend function to transpose the matrix
    friend matrix trans(matrix m1);
};

// Function to transpose a given matrix
matrix trans(matrix m1) {
    matrix m2; // Create an object for transposed matrix
    // Transpose the matrix
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m2.m[i][j] = m1.m[j][i]; // Transposing the matrix
    return m2; // Return the transposed matrix
}

int main() {
    matrix mat1, mat2; // Create two matrix objects
    mat1.read(); // Input elements for mat1
    cout << "\nYou entered the following matrix:";
    mat1.display(); // Display original matrix
    mat2 = trans(mat1); // Transpose the matrix and assign to mat2
    cout << "\nTransposed matrix:";
    mat2.display(); // Display transposed matrix
    getch();
    return 0;
}
