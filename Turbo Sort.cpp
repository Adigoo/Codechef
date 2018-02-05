#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main()
{
  long int t;
  cin>>t;
  long int a[t];
  for(long int i=0;i<t;i++)
  {
     cin>>a[i];
  }
  sort(a, a+t);
  for(long int i=0;i<t;i++)
  {
     cout<<a[i]<<endl;
  }
 
  return 0;
}