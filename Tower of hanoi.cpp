/* Tower of Hanoi*/

#include <iostream>

using namespace std;

void towerofhanoi(int n,char a,char b, char c)
{
    if(n==0) return;
    towerofhanoi(n-1,a,c,b);
    cout<<"Moved from "<<a<<" to rod "<<b<<" Disk :"<<n<<endl;
    towerofhanoi(n-1,c,b,a);
}

int main()
{
    cout<<"Input number of terms :"<<endl;
    int n;
    cin>>n;
    
    towerofhanoi(n,'A','B','C');
}
 
