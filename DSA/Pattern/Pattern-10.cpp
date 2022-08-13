#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int i,j;

    for(i=1;i<=n;i++)
    {
        int value=i;
        for(j=i;j<=n;j++)
        {
            cout << value << " ";
            value = value + 1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}
/*
input = 9
output =
1 2 3 4 5 
3 4 5 6 
5 6 7 
7 8 
9 
*/