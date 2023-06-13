#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[100],n;

    cout << "Enter size of the array: " ;
    cin >> n;

    cout << "Enter any " << n << " number in the array: " << endl ;
    /*int arr[] = {1,5,7,6,8,9,21,2,5,21,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array: " ;*/

    for(int i=0; i<n; i++){
        cin >> arr[i] ;
        //cout << arr[i] << " ";
    }

    cout << "Duplicate elements of the array: ";
    for(int i=0; i<n; i++){
        int j=0;
        for(j=0; j<i; j++)
            if(arr[i] == arr[j])

            cout << arr[j] << " ";
        }
    return 0;
}