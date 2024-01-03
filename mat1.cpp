#include <iostream>
using namespace std;

const int MAX = 100;


class Matrix {
private:
    int mat[MAX][MAX];
    int row, col;

public:
    // Constructor to initialize the matrix with 0s
    Matrix(int r, int c) {
        row = r;
        col = c;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                mat[i][j] = 0;
            }
        }
    }

    // Function to input elements into the matrix
    void inputMatrix() {
        cout << "Enter elements of matrix:" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to display the matrix
    void displayMatrix() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Getter functions to access private members
    int getRow() const {
        return row;
    }

    int getCol() const {
        return col;
    }

    // Function to access the matrix elements
    int getElement(int i, int j) const {
        return mat[i][j];
    }

    // Function to set the matrix elements
    void setElement(int i, int j, int value) {
        mat[i][j] = value;
    }
};

// Function to multiply two matrices
Matrix matrixMultiply(Matrix &m1, Matrix &m2) {
    if (m1.getCol() != m2.getRow()) {
        cout << "Matrices cannot be multiplied!" << endl;
        return Matrix(0, 0);
    }
    Matrix result(m1.getRow(), m2.getCol());
    for (int i = 0; i < m1.getRow(); i++) {
        for (int j = 0; j < m2.getCol(); j++) {
            for (int k = 0; k < m1.getCol(); k++) {
                int value = result.getElement(i, j) + m1.getElement(i, k) * m2.getElement(k, j);
                result.setElement(i, j, value);
            }
        }
    }
    return result;
}

int main() {
    int choice, r1, c1, r2, c2;
    Matrix m1(0, 0), m2(0, 0); // Creating instances of Matrix class

    cout << "Multiply Two Matrix: " << endl;
    cout << "1. Enter Matrix Elements" << endl;
    cout << "2. Multiply Two Matrices" << endl;
    cout << "3. Display Matrices" << endl;
    cout << "4. Exit" << endl;

    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the number of rows and columns for the first matrix: ";
                cin >> r1 >> c1;
                m1 = Matrix(r1, c1);
                m1.inputMatrix();

                cout << "Enter the number of rows and columns for the second matrix: ";
                cin >> r2 >> c2;
                m2 = Matrix(r2, c2);
                m2.inputMatrix();
                break;
            }
            case 2: {
                Matrix result = matrixMultiply(m1, m2);
                if (result.getRow() != 0 && result.getCol() != 0) {
                    cout << "Resultant Matrix:" << endl;
                    result.displayMatrix();
                }
                break;
            }
            case 3: {
                cout << "First Matrix:" << endl;
                m1.displayMatrix();
                cout << "Second Matrix:" << endl;
                m2.displayMatrix();
                break;
            }
            case 4: {
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            }
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}