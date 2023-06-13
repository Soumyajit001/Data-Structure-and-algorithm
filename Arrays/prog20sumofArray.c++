#include<iostream>
using namespace std;

int main(){
    int i,n,arr[100],sum=0;
    cout << "Enter size of Array: ";
    cin >> n;

    cout << "Enter the array: " << endl;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Sum of all elements in the array: ";
    //int sum=0;
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}
