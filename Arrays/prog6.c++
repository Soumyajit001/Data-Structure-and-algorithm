#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Print the array : \n";

    int i;

    for(i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int third[15]={2,7};

    printArray(third,15);
    
    cout << " Printing done " << endl ;

    return 0 ;
}
