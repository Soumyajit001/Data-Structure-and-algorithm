#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;

    int row = 1;
    int count = 1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout << count <<" ";
            count = count + 1;
            col=col+1;
        
        }
        cout << endl;
        row=row+1 ;
    }
    return 0;
}
/*
input = 4
output = 
1 
2 3 
4 5 6 
7 8 9 10 
*/