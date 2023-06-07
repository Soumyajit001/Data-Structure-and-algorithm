#include<iostream>
using namespace std;

int main()
{
    int fourth[10] = {0};

    cout << "Print the array : \n";
    int i,n=10;
    for(i=0;i<n;i++){
        cout << fourth[i] << " ";
    }

    return 0;
}
/*
ans:
Print the array : 
0 0 0 0 0 0 0 0 0 0
*/


/*
int fourth[10] = {0};

    cout << "Print the array : \n";
    int i,n=15;
    for(i=0;i<n;i++)
    {
        cout << fourth[i] << " ";
    }
ans:
Print the array : 
0 0 0 0 0 0 0 0 0 0 15 11 6422320 4199136 6422356     
*/

/*
int fourth[10] = {0};

    cout << "Print the array : \n";
    int i,n=20;
    for(i=0;i<n;i++)
    {
        cout << fourth[i] << " ";
    }
ans:
Print the array : 
0 0 0 0 0 0 0 0 0 0 20 11 6422320 4199136 6422356 4199048 4194432 6422288 2306048 4199048
*/