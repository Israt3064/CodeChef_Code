#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        s.insert(a);
    }
    cout<<s.size()<<endl;

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
