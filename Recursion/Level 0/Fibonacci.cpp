#include <iostream>
using namespace std;
int fib(int a) {
    if(a== 0) return 0;
    
    else if(a==1) return 1;

    int res = fib(a-1) + fib(a-2);

    return res; 

}
int main()
{
    int a;
    cout<<"enter no"<< endl;
    cin >> a;
    int ans  =  fib(a);
    cout << ans << endl;
}