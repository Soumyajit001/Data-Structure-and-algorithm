#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr,int n){
    
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){

            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
}
void printArray(int arr[], int n)   //size = n
{
    int i;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}

int main(){

    int arr[100],n,i;
    
    cout << "Enter size of Array: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    selectionSort(arr, n);
    cout << "The sorted array is ";
    printArray(arr, n);

    return 0;
}

/* 
 29,72,98,13,87,66,52,51,36  -- 13 is smallest, 1st swap 13 & 29

 13,72,98,29,87,66,52,51,36  -- 29 is smallest, 2nd swap 29 & 72

 13,29,98,72,87,66,52,51,36  -- 36 is smallest, 3rd swap 36 & 98

 13,29,36,72,87,66,52,51,98  -- 51 is smallest, 4th swap 51 & 72

 13,29,36,51,87,66,52,72,98  -- 52 is smallest, 5th swap 52 & 87

 13,29,36,51,52,66,87,72,98  -- 66 is smallest, no swapping

 13,29,36,51,52,66,87,72,98 -- 72 is smallest, 6th swap 72 & 87

 13,29,36,51,52,66,72,87,98 -- 87 is smallest, no swapping

 13,29,36,51,52,66,72,87,98 -- sorting completed
*/ 