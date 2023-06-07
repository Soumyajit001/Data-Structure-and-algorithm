#include<iostream>
using namespace std;

int main()
{
    int fifth[10] = {1};

    cout << "Print the array : \n";
    int i,n=10;
    for(i=0;i<n;i++){
        cout << fifth[i] << " ";
    }

    return 0;
}
/*
ans:
Print the array : 
1 0 0 0 0 0 0 0 0 0
*/

/*
int fifth[10] = {2};

    cout << "Print the array : \n";
    int i,n=10;
    for(i=0;i<n;i++)
    {
        cout << fifth[i] << " ";
    }
ans:
Print the array : 
2 0 0 0 0 0 0 0 0 0
*/