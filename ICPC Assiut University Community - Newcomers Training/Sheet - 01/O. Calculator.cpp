#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     long long a,b;
     char s;

     cin>>a>>s>>b;

     if(s=='+')
        cout<<a+b<<endl;
     if(s=='-')
        cout<<a-b<<endl;
     if(s=='*')
        cout<<a*b<<endl;
     if(s=='/')
        cout<<a/b<<endl;

     return 0;
 }

