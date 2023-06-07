#include<iostream>
using namespace std;

int main()
{
 int third[15] = {2,7};
    int i,n=3;
    cout << "Print the array" << endl;

    for(i=0;i<n;i++)
    {
        cout << third[i] << " ";
    }

    return 0;
}

/*
ans:[since the n=3, so 3 values are printed here]
Print the array
2 7 0[the last element is 0,since 2 elements are given in the array]
*/

/*
int third[15] = {2,7};
    int i,n=15;
    cout << "Print the array" << endl;

    for(i=0;i<n;i++)
    {
        cout << third[i] << " ";
    }

ans:[since the n=15, so 15 values are printed here]
Print the array
2 7 0 0 0 0 0 0 0 0 0 0 0 0 0
[since 2 elements are given in the array so after that all the elements becomes 0]
*/