#include<stdio.h>
#include<math.h>
#define pi 3.14159265359
int main()
{
double r,R,deg,rad;
int n,t,i;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%lf%d",&R,&n);
deg=(360/(2.0*n));
rad=(pi*deg)/180;
r=(R*sin(rad))/(1+sin(rad));
printf("Case %d: %.10lf\n",i,r);
}

return 0;
}
