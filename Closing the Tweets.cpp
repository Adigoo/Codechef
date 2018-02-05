#include <iostream>
#include <string.h>
using namespace std;
 
int coun(int a[],int n)
{
    int cc=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]==1)
        {
            cc++;
        }
    }
    cout<<cc<<endl;
    return 0;
}
 
int main()
{
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  {
      a[i]=0;
  }
  string q,b,s;
  q="CLICK";
  b="CLOSEALL";
  while(k--)
  {
      int c;
        cin>>s;
        if((s.compare(q))==0)
        {
            cin>>c;
            c=c-1;
            if(a[c]==0)
            {
                a[c]=1;
            }
            else if(a[c]==1)
            {
                a[c]=0;
            }
        }
        else if((s.compare(b))==0)
        {
            for(int i=0;i<n;i++)
            {
                a[i]=0;
            }
        }
        coun(a,n);
  }
 
return 0;
}
 