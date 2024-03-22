#include<bits/stdc++.h>

using namespace std;

int main()
{
    float n,m;

    cin>>n;
    m=n-(int)n;

    if(n==(int)n)
        cout<<"int "<<(int)n;
    else
        cout<<"float "<<(int)n<<" "<<m<<endl;




    return 0;
}


