#include <stdio.h>
#include <stdlib.h>
int main()
{int T,i,g,n=5,s=0,a,c[6];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {scanf("%d",&g);
        n=5;
        s=0;
        do{a=g/n;
            s=s+a;
            n=n*5;}
            while(n<=g);
    printf("%d\n",s);}
    return 0;
} 