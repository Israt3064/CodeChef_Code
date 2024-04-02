#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int a,b;
   int cnt=0, cnt1=0;
   cin>>a>>b;
   if(a==b)
   {
       cout<<0<<endl;
       return;
   }
   else if(a>b)
   {
       while(a>b)
       {
           b+=2;
           cnt++;
           if(a==b)
           {
               cout<<cnt<<endl;
           }
       }
   }
   else
   {
       while(a<b)
    {
        a++;
        cnt1++;
        if(a==b)
        {
            cout<<cnt1<<endl;
        }
    }
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

