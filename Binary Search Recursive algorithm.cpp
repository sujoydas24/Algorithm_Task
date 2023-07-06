#include <iostream>
using namespace std;

int binarySearch(int A[], int low, int high, int x) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (x == A[mid]) {
        return mid;
    } else if (x < A[mid]) {
        return binarySearch(A, low, mid - 1, x);
    } else {
        return binarySearch(A, mid + 1, high, x);
    }
}

int main() {
    int A[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(A) / sizeof(A[0]);

    int x = 7;
    int index = binarySearch(A, 0, n - 1, x);

    if (index != -1) {
        cout << "Element " << x << " found in index " << index <<endl;
    } else {
        cout << "Element " << x << " not found in the array" <<endl;
    }

    return 0;
}
