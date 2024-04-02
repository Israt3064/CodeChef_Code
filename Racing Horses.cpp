#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int>v1;
    for(int i=1; i<n; i++)
    {
        int a = v[i]-v[i-1];
        v1.push_back(a);
    }
    cout<<*min_element(v1.begin(), v1.end())<<endl;

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

