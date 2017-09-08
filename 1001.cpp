#include <iostream>
using namespace std;

int main()
{
    int n,t,i,p;
    cin >>t;
    for(i=1;i<=t;i++)
    {
        cin >> n;
        p=n/2;
        cout <<p <<n-p <<endl;
        //printf("%d %d\n",p,n-p);
    }
    return 0;
}
