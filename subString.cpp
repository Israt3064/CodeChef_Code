#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            for(int len = 1; len <= s.size()-i; len++)
            {
                cout << s.substr(i, len) << endl;
            }
        }

    }
}
int main()
{
    solve();
    return 0;

}

