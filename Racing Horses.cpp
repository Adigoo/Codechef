#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int64_t a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
 
    int64_t mi=1000000001,m;
 
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]>=a[j])
           {
              m=a[i]-a[j];
           }
           else if(a[i]<a[j])
            {
              m=a[j]-a[i];
           }
 
 
           if(m<mi){mi=m;}
       }
    }
    cout<<mi<<endl;
 
  }
 return 0;
}