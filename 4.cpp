#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrix1[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[rows][cols] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrix3[rows][cols] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
    int result[rows][cols];

    // Matrix addition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j] + matrix3[i][j];
        }
    }

    // Print result matrix
    cout << "Result matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
