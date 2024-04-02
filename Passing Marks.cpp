#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());
    if(n==x)
    {
        cout<<*min_element(v.begin(),v.end())-1<<endl;
    }
    else{
        cout<<v[x-1]-1<<endl;
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


