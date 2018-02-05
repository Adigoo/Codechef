#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int64_t t,n,m,x,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>k;
        string s;
        int64_t e=0,o=0,even=0,odd=0,fe,fo,ans=0;
        cin>>s;
        for(int64_t i=0;i<k;i++)
        {
            if(s[i]=='E')
            {
                e++;
            }
            else{o++;}
        }
 
        if(m%2==0)
        {
            even=m/2;
            odd=m/2;
        }
        else if(m%2==1)
        {
            even=m/2;
            odd=m/2+1;
        }
 
        for(int64_t pp=0;pp<even;pp++)
        {
            fe=(e>=x)? x : e;
            ans=ans+fe;
            e=e-fe;
            if(e<0)
            {
                e=0;
            }
        }
 
        for(int64_t ll=0;ll<odd;ll++)
        {
            fo=(o>=x)? x : o;
            ans=ans+fo;
            o=o-fo;
            if(o<0)
            {
                o=0;
            }
        }
 
        if(ans>=n)
        {
            cout<<"yes"<<endl;
        }
        else if(ans<n)
        {
            cout<<"no"<<endl;
        }
 
    }
    return 0;
}