#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;

    int i=1;
    int count = 1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<count<<" ";
            count = count + 1;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0;
}
/*
input=4
output =
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
