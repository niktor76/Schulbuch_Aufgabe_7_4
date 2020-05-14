#include <iostream>

using namespace std;

int main() {
    const int columns = 3;
    const int rows = 3;
    int matrize1[rows][columns] = {{1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9}};
    int matrize2[rows][columns] = {{10, 11, 12},
                                   {13, 14, 15},
                                   {16, 17, 18}};
    int product[rows][columns];

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < columns; ++c) {
            int sum = 0;
            for (int e = 0; e < rows; ++e) {
                sum += matrize1[r][e] * matrize2[e][c];
            }
            product[r][c] = sum;
        }
    }

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < columns; ++c) {
            cout << product[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
