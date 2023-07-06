#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int pIndex = start;

    for (int i = start; i < end; i++) {
        if (arr[i] < pivot) {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }

    swap(arr[pIndex], arr[end]);
    return pIndex;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {7, 2, 1, 6, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    int pIndex = partition(arr, 0, size - 1);

    cout << "Array after partition: ";
    printArray(arr, size);
    cout << "Pivot index: " << pIndex << endl;

    return 0;
}

