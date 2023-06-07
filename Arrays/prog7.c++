#include<iostream>
using namespace std;

int main()
{
    int fifth[14] = {1,3};

    int fifthSize = sizeof(fifth)/sizeof(int);

    cout << "Size of fifth is " << fifthSize << endl;

    return 0;
}