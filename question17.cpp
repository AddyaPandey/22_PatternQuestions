/*
ABCDE
ABCD
ABC
AB
A

 */
#include <iostream>
using namespace std;

int main()
{
 int n;
 char ch;
    for (int i = 0; i < n; i++){

        for (char ch = 'A'; ch <='A'+ (n -i -1); ch++);
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}