#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){   
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {2,7,1,-4,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of all elements in the array is " << sum(arr, n);
    return 0;
}
