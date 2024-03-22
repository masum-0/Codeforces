#include<iostream>

using namespace std;

int main()
{
    int n,year,a,month,day;

    cin>>n;

    year=n/365;
    a=n%365;
    month=a/30;
    day=a%30;

    cout<<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl;

    return 0;
}


