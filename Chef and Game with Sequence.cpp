#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
     cin>>n;
     int a,con=0;
     for(int i=0;i<n;i++)
     {
        cin>>a;
        if(a%2==1)
        {
           con++;
        }
     }
 
     if(con%2==1)
     {
        cout<<"2"<<endl;
     }
     else
     {
       cout<<"1"<<endl;
     }
  }
 
return 0;
}
 