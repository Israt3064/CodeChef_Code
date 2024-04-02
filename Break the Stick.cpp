#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int x, n;
    cin >> x >> n;
    if(x%n == 0)
    {
        cout << "YES" << endl;
    }
    else if((x%2==0) && (n%2==0) || (n%2==1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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

