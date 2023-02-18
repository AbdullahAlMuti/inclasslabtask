#include <iostream>

using namespace std;

int main() {
    const int rows1 = 3;
    const int cols1 = 2;
    const int rows2 = 2;
    const int cols2 = 3;

    int matrix1[rows1][cols1] = {{1, 2}, {3, 4}, {5, 6}};
    int matrix2[rows2][cols2] = {{7, 8, 9}, {10, 11, 12}};
    int result[rows1][cols2];

    // Matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < rows2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print result matrix
    cout << "Result matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
