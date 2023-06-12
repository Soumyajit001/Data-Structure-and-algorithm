// check if a number is power of 2 or not.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: " ;
    cin >> n;

    if (n>0){
        while(n%2 == 0){
            n = n/2;
        }
        if(n==1){
            cout << "Number is power of 2 " << endl;
        }
    }
    if(n!=1){
    cout << "Number is not power of 2" << endl;
    }
    
    if(n<0){
        cout << "Negative value can't be power of any number" << endl;
    }
    return 0;
}