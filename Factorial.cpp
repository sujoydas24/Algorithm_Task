#include<bits/stdc++.h>
using namespace std;

int factorial (int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    } else {
        return n* factorial(n-1);
    }
}

int main()
{
    int a;
    cout<< "enter num: ";
    cin>>a;

    int result = factorial(a);
    cout<< "Factorial Number: "<< result;


    return 0;
}

