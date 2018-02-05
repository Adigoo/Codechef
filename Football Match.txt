#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int64_t t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,a,b;
        a="aditya";
        b="gonnade";
        int64_t aa=0,bb=0;
        while(n--)
        {

            cin>>s;
           if((a.compare("aditya"))==0)
           {
               a=s;
           }


            if((s.compare(a))==0)
            {
              aa++;
            }
            else if((s.compare(a))!=0)
            {
                bb++;
                b=s;
            }
        }
        if(aa>bb)
        {
            cout<<a<<endl;
        }
        else if(aa<bb)
        {
            cout<<b<<endl;
        }
        else if(aa==bb)
        {
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}
