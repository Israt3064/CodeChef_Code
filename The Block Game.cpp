#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
#define pbb pop_back
#define nl '\n'

using namespace std;
void solve()
{
    string n;
    cin >> n;
    string t = n;
    reverse(n.begin(), n.end());
    if(n == t)
    {
        cout << "wins" <<'\n';
    }
    else{
        cout << "loses" << '\n';
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


