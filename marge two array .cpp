#include <iostream>
using namespace std;

// Function for marging 
void merge(int A[], int B[], int n, int m, int C[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (A[i] > B[j]) {
            C[k++] = B[j++];
        } else {
            C[k++] = A[i++];
        }
    }

    while (i < n) {
        C[k++] = A[i++];
    }

    while (j < m) {
        C[k++] = B[j++];
    }
}

// Function to print
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//main method
int main() {
    int A[] = {1, 4, 7, 9};
    int B[] = {2, 3, 5, 8};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int C[n + m];

    cout << "Array A: ";
    printArray(A, n);

    cout << "Array B: ";
    printArray(B, m);

    merge(A, B, n, m, C);

    cout << "Merged array C: ";
    printArray(C, n + m);

    return 0;
}