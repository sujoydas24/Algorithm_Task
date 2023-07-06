#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r = a % b;

    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

int main() {
    int a, b;
    cout<< "Enter two Number: ";
    cin>>a>>b;

    int result = gcd(a, b);

    cout << "GCD of those number " << result << endl;

    return 0;
}

