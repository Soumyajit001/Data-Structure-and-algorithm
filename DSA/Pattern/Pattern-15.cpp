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
B B 
C C C 
D D D D 
*/