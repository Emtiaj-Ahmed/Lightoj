#include <iostream>
using namespace std;

int main()
    {
        int t,i,a,b;
        cin>>t;
        for(i=0;i<t;i++)
        {
            cin>>a>>b;
            if(b==a)
            cout<<"Case "<<(i+1)<<": "<<(19+b*4)<<endl;
            else if(a<b)
            cout<<"Case "<<(i+1)<<": "<<(19+b*4)<<endl;
            else if(a>b)
            cout<<"Case "<<(i+1)<<": "<<(19+a*4+(a-b)*4)<<endl;



        }

        return 0;
    }
