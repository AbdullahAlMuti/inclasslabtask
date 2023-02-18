#include <iostream>

using namespace std;

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int num_even = 0;
    int num_odd = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            num_even++;
        } else {
            num_odd++;
        }
    }

    cout << "Number of even numbers: " << num_even << endl;
    cout << "Number of odd numbers: " << num_odd << endl;

    return 0;
}
