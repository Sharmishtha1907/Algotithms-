/* Linear Search */

#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cout<<"Input number of elements : "<<endl;
    cin>>n;
    
    int a[n];
    cout<<"Input elements : "<<endl;
    int i;
    for ( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Input key : "<<endl;
    cin>>k;
    
    
    i=0;
    while(i<n)
    {
        if(a[i]==k)
        {
            cout<<"Found at position : "<<i+1<<endl;
            break;
        }
        i++;
    }
    if(i>=n)
    {
        cout<<"Not found";
    }
}