/* Tower of Hanoi*/

#include <iostream>

using namespace std;

int fac(int n)
{
    if(n==0||n==1) return 1;
    return n*fac(n-1);
}

int main()
{
    cout<<"Input number of terms :"<<endl;
    int n;
    cin>>n;
    int x=fac(n);
    cout<<"Factorial : "<<x;
}
 
