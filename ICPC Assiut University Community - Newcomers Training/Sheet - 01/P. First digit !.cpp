#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long num,i,digit;

    cin>>num;

    if((num/1000)%2==0)
        cout<<"EVEN"<<endl;
    else
        cout<<"ODD"<<endl;

    return 0;
}
