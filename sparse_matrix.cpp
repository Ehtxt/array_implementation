#include <iostream>
using namespace std;

// Sparse Matrix Implementation using Array of Triplets

struct Element {
    int row;
    int col;
    int value;
};

// Sparse Matrix class
class SparseMatrix {
private:
    int rows, cols, numNonZero;
    Element* elements;

public:
    SparseMatrix(int r, int c, int nz) {
        rows = r;
        cols = c;
        numNonZero = nz;
        elements = new Element[numNonZero];
    }

    ~SparseMatrix() {
        delete[] elements;
    }

    void readElements() {
        cout << "Enter row, column, and value for each non-zero element:\n";
        for (int i = 0; i < numNonZero; i++) {
            cin >> elements[i].row >> elements[i].col >> elements[i].value;
        }
    }

    void display() {
        int k = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (k < numNonZero && elements[k].row == i && elements[k].col == j) {
                    cout << elements[k].value << " ";
                    k++;
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

// Main function
int main() {
    int rows, cols, nz;

    cout << "Enter number of rows, columns, and non-zero elements: ";
    cin >> rows >> cols >> nz;

    SparseMatrix sm(rows, cols, nz);
    sm.readElements();

    cout << "\nThe Sparse Matrix is:\n";
    sm.display();

    return 0;
}
