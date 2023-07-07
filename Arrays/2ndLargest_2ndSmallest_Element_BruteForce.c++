// Brute Force

#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n){
    if(n==0 || n==1){
        cout << -1 << " " << -1 << endl; // When only 1 element is present in the array
    }
    sort(arr, arr+n);
    int small = arr[1];
    int large = arr[n-2];
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
     
}

int main(){
    int arr[100],n,i;
    cout << "Size of the array: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0; i<n; i++){
    cin >> arr[i];
    }

    getElements(arr,n);
    
    return 0;
}