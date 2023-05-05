/*
Time complexity : O(2^n);
Space complexity : o(n);
*/

#include <iostream>
using namespace std;

int rec(int a) {
    if(a == 1) return 1;
    int fact;
    fact = a * rec(a-1);

    return fact;

}

int main()
{
    
    int a ;
    cout<<"Enter your number"<<endl;
    cin >> a;
    cout << a<< endl;
    int res = rec(a);
    cout << res << endl;

}