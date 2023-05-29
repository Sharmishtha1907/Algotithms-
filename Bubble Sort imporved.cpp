
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter size of array :"<<endl;
    int n;
    cin>>n;
    cout<<"Enter n elements : "<<endl;
    int a[n];
    bool sp;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        sp=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
             swap(a[j],a[j+1]);
             sp=1;
            }
        }
        
        if(sp==0) break;
    }
    
    cout<<"Result"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    
}
