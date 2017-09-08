#include<stdio.h>
int main()
{
int n,t;
scanf("%d",&n);
for(t=1;t<=n;t=t+1)
 {
     int a,b;
     scanf("%d",&a);
     scanf("%d",&b);
     printf("Case %d: %d\n",t,a+b);
 }
return 0;

}



