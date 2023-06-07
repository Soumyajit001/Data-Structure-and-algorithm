#include<iostream>
using namespace std;

int main()
{
    char ch[5] = {'p','u','w','a','e'};

    cout << ch[5] << endl;

    cout << "\nprinting the array : \n" << endl;
    for(int i=0;i<5;i++){
        cout << ch[i] << " ";
    }
    cout << " Printing done " << endl;
    
    return 0;
}
/*
ans:
a

printing the array :

p u w a e  Printing done
*/
/*
char ch[5] = {'p','u','w','a','e'};

    cout << ch[3] << endl;

    cout << "\nprinting the array : \n" << endl;
    for(int i=0;i<5;i++){
        cout << ch[i] << " ";
    }
    cout << " Printing done " << endl;

ans:
δ

printing the array :

p u w a e  Printing done
*/