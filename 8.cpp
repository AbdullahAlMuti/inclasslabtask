#include <iostream>
#include <stdexcept>

using namespace std;

int factorialIfPrime(int n) {
    // check if n is prime
    bool isPrime = true;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        // calculate the factorial of n
        int factorial = 1;
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
    } else {
        throw runtime_error("Number is not prime.");
    }
}

int main() {
    int n = 7;
    try {
        int result = factorialIfPrime(n);
        cout << "Factorial of " << n << " is " << result << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
