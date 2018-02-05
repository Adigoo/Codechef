#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    int a[n+1],b[n-m],q,l=0;
     for(int i=0;i<n+1;i++)
     {
        a[i]=i;
     }
 
     for(int j=0;j<m;j++)
     {
        cin>>q;
        a[q]=0;
     }
 
     for(int k=0;k<n+1;k++)
     {
        if(a[k]!=0)
        {
          b[l]=a[k];
          l++;
        }
     }
     sort(b,b+(n-m));
 
     for(int i=0;i<n-m;i=i+2)
     {
        cout<<b[i]<<" ";
     }
     cout<<"\n";
     if(n-m>1){
     for(int i=1;i<n-m;i=i+2)
     {
       cout<<b[i]<<" ";
     }}
     cout<<"\n";
 
  }
 return 0;
}