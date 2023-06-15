#include<bits/stdc++.h>
using namespace std;

int findSmallestElement(int arr[], int n){
int min = arr[0];
    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}    

int main(){
    int arr[100],n,i;
    cout << "Size of the array: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0; i<n; i++){
    cin >> arr[i];
    }

    cout << "Smallest element in the array: " << findSmallestElement(arr,n) << endl;
    
    return 0;
}

/*
ans1:
Size of the array: 5
Enter the array: 2 5 1 3 0
Smallest element in the array: 0

ans2:
Size of the array: 5
Enter the array: 8 10 5 7 9
Smallest element in the array: 5
*/