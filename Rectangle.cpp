#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
 
int main()
{
  int t,a,b,c,d;
  scanf("%d",&t);
  while(t--)
  {
      int flag=0;
      scanf("%d%d%d%d",&a,&b,&c,&d);
      if((a==b && c==d)||(a==c && b==d)||(a==d && c==b))
      {
          flag=1;
      }
      if(flag==1)
      {
          printf("YES\n");
      }
      else{printf("NO\n");}
  }
 
 return 0;
}
 