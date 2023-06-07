#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout << "Inside the function" << endl;

    
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout <<  " Going back to main function " ;
}

int main()
{
    int arr[10] {1,2,3};

    update(arr, 5);

    for(int i=0; i<11; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
