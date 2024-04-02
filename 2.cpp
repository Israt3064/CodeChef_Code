#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define lpz(i, a, b) for (int i=a; i<b; i++)
#define lp(i, a, b) for (int i=a; i<=b; i++)
#define test() int t; cin>>t; while(t--)
#define ull unsigned long long


vector<ll> f(ll P) {
    if (P == 1) {
        vector<ll> result(41, 1);
        return result;
    }

    vector<ll> array;
    for (ll i = 2; i <= 100; i++) {
        while (P % i == 0) {
            array.pb(i);
            P /= i;
        }
    }

    if (P == 1 && array.size() <= 100) {
        return array;
    } else {
        return {-1};
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    test(){
        ll val;
        cin >> val;

        vector<ll> result = f(val);

        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }


    return 0;
}
