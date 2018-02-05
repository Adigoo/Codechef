#include <iostream>
 
using namespace std;
 
int main()
{
     int n,W,L=0,s=0,d=0,S,D;
     cin>>n;
 
     for(int i=0;i<n;i++)
     {
        cin>>S>>D;
        s=s+S;
        d=d+D;
        if(s>d)
        {
          if((s-d)>L)
          {
              L=s-d;
              W=1;
          }
        }
        else
            {if((d-s)>L)
              {
                  L=d-s;
                  W=2;
              }
            }
     }
     cout<<W<<" "<<L;
 
return 0;
}
 