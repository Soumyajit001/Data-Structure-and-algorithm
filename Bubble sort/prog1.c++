#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector <int> &arr , int n){
    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }       
        }
    }
}

void printArray(vector <int> arr){
    int n = arr.size();
    for(int i=0; i<n; i++)
        cout << arr[i] << "  ";
}

int main(){

    vector <int> v;
    int n,arr[100],i;
    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the elements: " << endl;
    for(i=0; i<n; i++){
        cin >> arr[i];
        v.push_back(arr[i]);
    }

    bubbleSort(v,n);
    cout << "Bubble sort array is: ";
    printArray(v);

    return 0;
}
/*
ans:
Enter the size: 6
Enter the elements: 
10 1 7 6 14 9
Bubble sort array is: 1  6  7  9  10  14
*/