#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,arr[100],pos;
    cout << "Enter size of the array: ";
    cin >> n;

    cout << "Enter the array: " << endl;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter position to delete the array: ";
    cin >> pos;

    if(pos>=n){
        cout << "The position value " << pos << " is out of the array. ";
    }

    else{
        for(i=pos; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        cout << "New Array: ";
        for(i=0; i<n-1; i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}
/*
ans:
Enter size of the array: 5
Enter the array:
1 2 3 4 5 
Enter position to delete the array: 3
New Array: 1 2 3 5
*/