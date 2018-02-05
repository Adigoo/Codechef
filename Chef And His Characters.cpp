#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int64_t t,n;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       n=s.length();
       char ss[4];
       int64_t cont=0;
       for(int64_t i=0;i<n-3;i++)
       {
          ss[0]=s[i];
          ss[1]=s[i+1];
          ss[2]=s[i+2];
          ss[3]=s[i+3];
          sort(ss,ss+4);
          if(ss[0]=='c' && ss[1]=='e' && ss[2]=='f' && ss[3]=='h')
          {
              cont++;
          }
       }
 
       if(cont>0)
       {
           cout<<"lovely "<<cont<<endl;
       }
       else{
        cout<<"normal"<<endl;
       }
    }
}