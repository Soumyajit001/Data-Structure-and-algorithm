#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin >> n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout << n-j+1;
            j=j+1;/*or in this place we can write j++*/
        }
        cout << endl;
        i=i+1;/*or in this place we can write i++*/
    }
    return 0;
}
/*
input n = 4
output =
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/