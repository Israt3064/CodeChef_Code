#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin>>s;
  int n = s.size();
  if(n==1)
  {
      cout<<1<<endl;
  }
  else if(n==2)
  {
      cout<<2<<endl;
  }
  else if(n==3)
  {
      cout<<3<<endl;
  }
  else{
    cout<<"More than 3 digits"<<endl;
  }
}
int main()
{
     solve();
    return 0;

}

