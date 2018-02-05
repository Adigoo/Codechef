#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define ln long int
 
 
int main()
{
   ln t,n;
  scanf("%ld",&t);
  while(t--)
  {
      scanf("%ld",&n);
      ln a[n][n],b[n],ma,flag;
      long long int sum=0;
          for(ln i=0;i<n;i++)
          {
              for(ln j=0;j<n;j++)
              {
                  scanf("%ld",&a[i][j]);
              }
          }
 
          for(ln i=n-1;i>=0;i--)
          {
              for(ln j=0;j<n;j++)
              {
                  b[j]=a[i][j];
              }
              sort(b,b+n);
 
              if(i==n-1)
              {
                  sum+=b[n-1];
                  ma=b[n-1];
              }
              else{
                    flag=0;
                    ln k;
                for(k=n-1;k>=0;k--)
                {
                    if(b[k]<ma)
                    {
                        flag=1;
                        break;
                    }
                    else{flag=0;}
                }
                if(flag==1)
                {
                    sum+=b[k];
                }
                else if(flag==0)
                {
                    sum=-1;
                    goto ac;
                }
                ma=b[k];
              }
 
 
          }
          ac:
              cout<<sum<<endl;
  }
 
 return 0;
}