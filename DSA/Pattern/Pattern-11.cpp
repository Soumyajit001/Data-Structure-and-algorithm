#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        int col=1;
        while(col<=n){
            char ch = ('A' + row - 1);
            cout << ch << " ";
            col=col+1;
        }
        cout << endl;
        row = row +1;
    }
    return 0;
}
/*
input = 4
output = 
A A A A 
B B B B 
C C C C 
D D D D 
*/