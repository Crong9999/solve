// https://www.acmicpc.net/problem/25206
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

void solve()
{
    int c = 20;

    double major_sum = 0.0;
    double total = 0.0;

    while(c--)
    {
        string s, t;
        double d, e;
        cin >> s >> d >> t;

        if (t == "A+")
        {
            e = 4.5;
        }
        else if (t == "A0")
        {
            e = 4.0;
        }
        else if (t == "B+")
        {
            e = 3.5;
        }
        else if (t == "B0")
        {
            e = 3.0;
        }
        else if (t == "C+")
        {
            e = 2.5;
        }
        else if (t == "C0")
        {
            e = 2.0;
        }
        else if (t == "D+")
        {
            e = 1.5;
        }
        else if (t == "D0")
        {
            e = 1.0;
        }
        else if (t == "F")
        {
            e = 0.0;
        }
        else
        {
            continue;
        }

        major_sum += d * e;
        total += d;
    }
    cout.precision(7);
    cout << fixed;
    cout << major_sum / total;
    cout.unsetf(ios::fixed);
}

signed main()
{
    fast;
    solve();
    return 0;
}