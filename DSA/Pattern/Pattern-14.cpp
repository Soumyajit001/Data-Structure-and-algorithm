#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;
    while (i<=n)
    {       
        int j=1;
        char ch = 'A'+i+j-2 ;/*i+j-1=1 add 'A'-1 to both sides here,we get 'A'+i+j-2='A'*/
        while(j<=n)
        {
        cout << ch << " " ;
        ch = ch +1;
        j++;
        }
    cout << endl;
    i=i+1;
    }
    return 0;
}
/*
input = 4
output = 
A B C D 
B C D E 
C D E F 
D E F G 
*/