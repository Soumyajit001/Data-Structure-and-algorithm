#include<iostream>
using namespace std;

int getMin(int num[], int n){

    int min = INT32_MAX;

    for(int i=0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    //returning max value
    return min;
}

int main()
{
    int size;
    cin >> size;

    int num[100];
    int i;
    //taking input in array
    for(i=0;i<size;i++){
        cin >> num[i];
    }

    cout << "Min value is " << getMin(num,size) << endl;
    return 0;
}
/*
ans:
8
-1 8 5 7 3 2 -0 0 
Min value is -1
*/