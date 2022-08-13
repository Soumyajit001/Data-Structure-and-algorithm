/*take value as input & equal to row*/
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
        int value = row;
        while (col<=row)
        {
            cout << value <<" ";
            value = value + 1;
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
3 4 5 
4 5 6 7 
*/


/*without taking value as input*/
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
        while (col<=row)
        {
            cout << row+col-1 <<" ";
            col=col+1;
        }
        cout << endl;
        row=row+1 ;
    }
    return 0;
}

/*for charac.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i<=n){ 

        int j=1;
        char value = 'A'+i-1;
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
C D E 
D E F G 
*/