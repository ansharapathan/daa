#include <iostream>
using namespace std;

int rsteps = 0;

int recursive_fibonacci(int n) {
    rsteps++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

void iterative_fibonacci(int n) {
    int isteps = 0;

    // Handle base cases
    if (n == 0) {
        cout << "0" << endl;
        cout << "Number of Steps : " << isteps << endl;
        return;
    }
    if (n == 1) {
        cout << "1" << endl;
        cout << "Number of Steps : " << isteps << endl;
        return;
    }

    // Starting values for n >= 2
    int prev1 = 0;
    int prev2 = 1;
    int curr = 1;

    for (int i = 2; i <= n; i++) {
        isteps++;
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    cout << curr << endl;
    cout << "Number of Steps : " << isteps << endl;
}

int main() {
    int n; 
    cout << "Enter n to Calculate nth Fibonacci Number: ";
    cin >> n;

    cout << "The value of " << n << "th Fibonacci Number is: " << endl;
    cout << "Recursive Approach: " << recursive_fibonacci(n) << endl;
    cout << "Number of Steps: " << rsteps << "\n" << endl;

    cout << "Iterative Approach: ";
    iterative_fibonacci(n);
}

