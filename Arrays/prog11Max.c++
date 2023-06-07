#include<iostream>
using namespace std;

int getMax(int num[], int n){

    //int max = INT32_MIN;
    int maxi = INT32_MIN;

    for(int i=0; i<n; i++){
        maxi = max(maxi, num[i]);
        //if(num[i] > max){
        //    max = num[i]; }
    }
    //returning max value
    return maxi;
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

    cout << "Max value is " << getMax(num,size) << endl;
    return 0;
}
/*
ans:
8
1 9 7 6 4 11 13 15
Max value is 15
*/
