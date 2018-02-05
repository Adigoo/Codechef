#include <iostream>
using namespace std;

int main()
{
  int64_t t;
  cin>>t;
  while(t--)
  {
    int64_t c,d,l;
    cin>>c>>d>>l;
    if(l%4!=0)
    {
       cout<<"no"<<endl;
    }
    else
    {
       int64_t min1,max1,flag=0,ca,dog=0;
       if(c%2==1)
       {
          flag=1;
       }
       ca=c/2;
              	if(ca>d)
              	{
              	 ca=ca-d;
      		 }
      		 else if(ca<=d)
      		 {
      		     dog=d-ca;
       		  ca=0;

       		}
       	if(flag==1)
       	{ca=(ca*2)+1;
       	   if(dog>=1)
           {
            ca=0;
           }
       	}
       	else
       	{ca=ca*2;}
      max1=(d+c)*4;
      min1=(d+ca)*4;

      if(l<=max1 && l>=min1)
      {
      cout<<"yes"<<endl;
      }
      else
      {cout<<"no"<<endl;}
    }
  }

return 0;
}
