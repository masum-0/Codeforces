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

int main()
{
    long long a,b,c;

    cin>>a>>b>>c;

    cout<<min1(a,b,c)<<" "<<max1(a,b,c)<<endl;

    return 0;
}

