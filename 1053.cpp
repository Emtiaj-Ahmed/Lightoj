#include <iostream>
using namespace std;
int main()
 {
    long long int a,b,c;
    int n,t;
    cin>>t;
    for(n=1;n<=t;n++){
        cin >>a >>b >>c;

        if (a<=0 || b<=0 ||c<=0)
        cout<<"Case " <<n <<": " <<"no" <<endl;
        else if(a*a==b*b+c*c)
        cout<<"Case " <<n <<": " <<"yes" <<endl;
        else if(b*b==a*a+c*c)
        cout<<"Case " <<n <<": " <<"yes" <<endl;
        else if(c*c==a*a+b*b)
        cout<<"Case " <<n <<": " <<"yes" <<endl;

        else
        cout<<"Case " <<n <<": " <<"no" <<endl;
    }

     return 0;
 }
