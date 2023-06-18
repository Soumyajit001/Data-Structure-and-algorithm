#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr,int n){
    
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){

            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

void printElems(vector <int> arr) {
    int i;
    int n = arr.size();
    for (i = 0; i < n; i++)
        cout << arr[i] << "  ";
}

int main(){

    vector<int> v;
    int arr[100],n,i;
    
    cout << "Enter size of Array: ";
    cin >> n;

    cout << "Enter the array: ";
    for(i=0; i<n; i++){
        cin >> arr[i];

        v.push_back(arr[i]);
    }

    selectionSort(v,n);
    cout << "The sorted array is : " ;
    printElems(v);

    return 0;
}
