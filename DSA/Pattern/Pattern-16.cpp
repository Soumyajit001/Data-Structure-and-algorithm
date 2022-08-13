#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;
    char value = 'A'+i-1;
    while(i<=n){ 
        int j=1;
        
        while(j<=i){
            cout << value << " ";
            value = value +1;
            j++;
        } 
        cout << endl;
        i++;
    }
    return 0;
}
/*
input = 4
output =
A 
B C 
D E F 
G H I J 
*/