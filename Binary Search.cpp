/* Binary Search */

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
    
    int l=0,r=n-1,m;
    while (l<=r)
    {
        m= l + (r-l)/2;
        if (a[m]==k)
        {
            cout<<m+1<<endl;
            break;
        }
        else if(a[m]>k)
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    if(r<l)
    {
        cout<<-1;
    }
    
}