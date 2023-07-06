//Optimal Solution 

#include<bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n){
int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}    

int main(){
    int arr[100],n,i;
    cout << "Size of the array: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0; i<n; i++){
    cin >> arr[i];
    }

    cout << "Largest element in the array: " << findLargestElement(arr,n) << endl;
    
    return 0;
}

// Time Complexity -> O(N)
// space Complexity -> O(1)

/*
ans1:
Size of the array: 5
Enter the array: 2 5 1 3 0
Largest element in the array: 5

ans2:
Size of the array: 5
Enter the array: 8 10 5 7 9
Largest element in the array: 10
*/
