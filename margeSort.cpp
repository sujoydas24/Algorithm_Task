#include <bits/stdc++.h>
using namespace std;

void Merge(int *a, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = a[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        R[i] = a[m + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k++] = R[j++];
        }
    }

    while (i < n1)
    {
        a[k++] = L[i++];
    }

    while (i < n2)
    {
        a[k++] = L[j++];
    }
}

void mergeSort(int *A, int left, int right)
{

    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid + 1, right);
        Merge(A, left, mid, right);
    }
}

void printList(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }

    cout << "\n";
}

int binarySearch(int *a, int left, int right)
{
    while(left<right)
    {

    }
}

int main()
{
    int n = 500;
    srand(time(0));
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = (rand() % 100);
    }

    printList(a, n);
    mergeSort(a, 0, n - 1);

    cout << "\n\n\n\n\n";
    printList(a, n);
}
