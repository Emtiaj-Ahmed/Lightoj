#include<stdio.h>
int main()
{
    int n,a,b,p,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&a,&b);
            p=a+b;
            printf("Case %d: %d\n",i,p);
        }
    }
    return 0;
}
