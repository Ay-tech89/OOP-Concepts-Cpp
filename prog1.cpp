#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int data[10][10];

public:
    Matrix(int r, int c) : rows(r), cols(c) {}

    void input() {
        cout << "Enter elements for a " << rows << "x" << cols << " matrix : \n";
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> data[i][j];
    }

    void display() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }

    Matrix multiply(Matrix &another) {
        if (cols != another.rows) {
            cout << "Error: Matrices cannot be multiplied." << endl;
            exit(1);
        }

        Matrix result(rows, another.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < another.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k)
                    result.data[i][j] += data[i][k] * another.data[k][j];
            }
        return result;
    }
};

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    Matrix matrix1(rows1, cols1);
    matrix1.input();

    cout << "Enter rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    Matrix matrix2(rows2, cols2);
    matrix2.input();

    if (cols1 == rows2) {
        Matrix result = matrix1.multiply(matrix2);
        cout << "Resultant Matrix:\n";
        result.display();
    } else {
        cout << "Error: Matrix dimensions do not allow multiplication." << endl;
    }

    return 0;
}
