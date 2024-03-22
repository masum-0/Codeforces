#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,d;

    cin>>a>>b>>c>>d;

    if((c<=b && c>=a) && d>=b)
        cout<<c<<" "<<b<<endl;
    else if((c>=a && c<=b) && (d>=a && d<=b))
        cout<<c<<" "<<d<<endl;
    else if(c<=a && (d>=a && d<=b))
        cout<<a<<" "<<d<<endl;
    else if((a>=c && a<=d) && (b>=c && b<=d))
        cout<<a<<" "<<b<<endl;
    else
        cout<<-1<<endl;


    return 0;
}
