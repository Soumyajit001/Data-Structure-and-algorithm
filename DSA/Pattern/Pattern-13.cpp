#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;

    int row = 1;
    char value = 'A'; 
    while (row<=n)
    {
        int col=1;
        while(col<=n){
            cout << value << " ";
            value = value + 1;
            col = col+1;
        }
        cout << endl;
        row = row +1;
    }
    return 0;
}
/*
input = 4;
output =
A B C D 
E F G H 
I J K L 
M N O P 
*/