#include<cstdio>
#include <iostream>
#include<cmath>
#include <iomanip>
#define pi  2 * acos (0.0)
using namespace std;
int main()
{
    int  n, t;
    double r,result;
    cin>>t;

    for(n=1;n<=t;n++)
    {
        cin >>r;
        result = (r*2*r*2)-(pi*r*r);
        //printf("Case %d: %.2lf\n",n,result);
        cout<<fixed<<setprecision(2)<<result;
        //cout <<"case " << n <<":" << result <<endl;
        //std::cout << std::setprecision( 2) << result << '\n';
   }
    return 0;

}
