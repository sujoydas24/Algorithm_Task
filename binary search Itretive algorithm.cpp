#include <iostream>
using namespace std;

int binarySearch(int A[], int n, int x) {
    int l = 0;
    int h = n - 1;

    while (l <= h) {
        int m = l + (h - l) / 2;

        if (x == A[m]) {
            return m;
        } else if (x < A[m]) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    return -1;
}

int main() {
    int A[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(A) / sizeof(A[0]);

    int x = 7;
    int res = binarySearch(A, n, x);

    if (res != -1) {
        cout << res << endl;
    } else {
        cout << "not found " << endl;
    }

    return 0;
}

