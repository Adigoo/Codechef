#include<iostream>
using namespace std;
 
int main()
{
  int t,a,b;
  cin>>t;
  
  for(int i=0;i<t;i++)
  {
    cin>>a;
    b=a%10;
    while(a/10>0)
    {
      a=a/10; 
    }
    b=b+a;
    cout<<b<<endl;
  }
 return 0;
} 