#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,g,i=0,j;
    scanf("%d%d",&n,&k);
    for(j=0;j<n;j++)
    {scanf("%d",&g);
        if(g%k==0)
        {i++;}}
    printf("%d",i);
    return 0;
} 