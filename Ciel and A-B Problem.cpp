#include <iostream>
using namespace std;
 
int main()
{
 int a,b,c,d;
 cin>>a>>b;
 if(a>b){c=a-b;}
 else{c=b-a;}
 d=c%10;
 if(d>=0 && d<9)
 {
   c+=1;
 }
 else if(d==9)
 {
   c-=1;
 }
 cout<<c<<endl;
 return 0;
}