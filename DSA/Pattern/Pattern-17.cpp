#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;
    while (i<=n){

        int j=1;
        while(j<=i){
            char ch = 'A'+i+j-2;/*i+j-1=1 add 'A'-1 to both sides here,we get 'A'+i+j-2='A'*/
            cout << ch << " ";
            ch++;
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
C D E 
D E F G 
*/