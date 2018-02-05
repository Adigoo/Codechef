#include<iostream>
using namespace std;
int main()
{
int t,a;
cin>>t;
for(int i=0;i<t;i++)
{
  cin>>a;
  long int k=0;
  while(a>0)
  {
     k=(k*10)+(a%10);
     a=a/10;
  }
  cout<<k<<endl;
}
  return 0;
}  