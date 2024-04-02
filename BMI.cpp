#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int m,h;
   cin>>m>>h;
   int res = (m/pow(h,2));
   if(res<=18)
   {
       cout<<1<<endl;
   }
   else if(res>=19 && res<=24)
   {
       cout<<2<<endl;
   }
   else if(res>=25 && res<=29)
   {
       cout<<3<<endl;
   }
   else if(res>=30)
   {
       cout<<4<<endl;
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     solve();
    }
    return 0;

}
