#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,n,arr[100],num;
    cout << "Enter size of the array: " ;
    cin >> n;

    cout << "Enter any " << n << " element in the array: " << endl;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter number for finding the position: " ;
    cin >> num;
    for(i=0; i<n; i++){
        if(arr[i]==num){
        cout << "index of " << num << " is " << i ;
        }
        
    }
    return 0;
}
