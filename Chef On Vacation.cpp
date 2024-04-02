#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int x,y,z;
   cin>>x>>y>>z;
   int sum;
   sum = x+y;
   if(sum<=z)
   {
       cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
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

