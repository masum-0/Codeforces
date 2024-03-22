#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,d;
    intmax_t mul;

    cin>>a>>b>>c>>d;

    mul= (a%100)*(b%100)*(c%100)*(d%100);

    int mod = mul%100;

    if(mod<10)
        cout<<0<<mod<<endl;
    else
        cout<<mod<<endl;


    return 0;
}

