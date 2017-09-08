#include<iostream>
#include<math.h>
using namespace std;
int test,p;
long i,n,b;
double f[1000010];

int main()
{
    cin >> test;
    for(i = 1; i <= 1000000; i++)
        f[i] = log((i)) + f[i-1];
    for(p = 1; p <= test; p++)
    {
        cin >> n >> b;
        cout << "Case " << p << ": " << (long)(f[n]/(f[b]-f[b-1])+1) << endl;;
    }
    return 0;
}
