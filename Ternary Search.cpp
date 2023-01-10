/* Ternary Search */

#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cout<<"Input number of elements : "<<endl;
    cin>>n;
    
    int a[n];
    cout<<"Input elements : "<<endl;
    
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Input key : "<<endl;
    cin>>k;
    
    int l=0,r=n-1,m1,m2;
    while (l<=r)
    {
        m1= l + (r-l)/3;
        m2= r + (r-l)/3;
        if (a[m1]==k)
        {
            cout<<m1+1<<endl;
            break;
        }
        if (a[m2]==k)
        {
            cout<<m2+1<<endl;
            break;
        }
        else if(a[m1]>k)
        {
            r=m1-1;
        }
        else if(a[m2]<k)
        {
            l=m2+1;
        }
        else
        {
            l=m1+1;
            r=m2-1;
        }
    }
    if(r<l)
    {
        cout<<-1;
    }
    
}