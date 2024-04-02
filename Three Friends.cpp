#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(((x+y)== z) || ((y+z) == x) || ((x+z) == y))
    {
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
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

