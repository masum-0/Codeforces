#include<bits/stdc++.h>

using namespace std;

long long max1(long long x,long long y,long long z)
{
    if(x>=y && x>=z)
        return x;
    else if(y>=x && y>=z)
        return y;
    else
        return z;
}

long long min1(long long x,long long y,long long z)
{
    if(x<=y && x<=z)
        return x;
    else if(y<=x && y<=z)
        return y;
    else
        return z;
}

long long mid(long long x,long long y,long long z)
{
    if((x>=y && x<=z) || (x<=y && x>=z))
        return x;
    else if((y>=x && y<=z) || (y<=x && y>=z))
        return y;
    else
        return z;
}

int main()
{
    long long a,b,c;

    cin>>a>>b>>c;

    cout<<min1(a,b,c)<<endl<<mid(a,b,c)<<endl<<max1(a,b,c)<<endl<<endl;

    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}
