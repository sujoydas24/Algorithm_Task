#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int a;
    cout << "Enter Num: ";
    cin >> a;

    int result = fibonacci(a);
    cout << "Fibonacci number " << result;

    return 0;
}
