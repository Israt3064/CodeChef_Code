#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int n, v1, v2;
    cin >> n >> v1 >> v2;
    float stair = n*sqrt(2)/v1;
    float ele = n*2.0/v2;
    if((stair < ele))
    {
        cout << "Stairs" << endl;
    }
    else{
        cout << "Elevator" << endl;
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

