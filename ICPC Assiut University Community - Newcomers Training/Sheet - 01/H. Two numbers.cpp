#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     double a,b,flr,cl,rnd;

     cin>>a>>b;

     flr = floor(a/b);
     cl = ceil(a/b);
     rnd = round(a/b);

     cout<<"floor "<<a<<" / "<<b<<" = "<<flr<<endl;
     cout<<"ceil "<<a<<" / "<<b<<" = "<<cl<<endl;
     cout<<"round "<<a<<" / "<<b<<" = "<<rnd<<endl;

     return 0;
 }
