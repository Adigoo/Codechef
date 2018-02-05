#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    for(int i=0;i<t;i++)
    {
        long long int a,b,c=0;
 
        cin>>a;
        while(a>0)
        {
            b=a%10;
            if(b==4)
            {
                c++;
            }
            a=a/10;
        }
        cout<<c<<endl;
    }
    return 0;
}