/*Fibonacci*/

#include <iostream>

using namespace std;



int main()
 {
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    
    int a=0,b=1,c;
    for (int i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
    }
    cout<<"Result : "<<c;
    
 }
 
