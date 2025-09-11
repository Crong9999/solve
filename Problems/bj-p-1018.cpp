// https://www.acmicpc.net/problem/1018
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
    int n, m;
    cin >> n >> m;

    vector<string> v;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int min_paint = 64;

    for (int i = 0; i <= n - 8; ++i)
    {
        for (int j = 0; j <= m - 8; ++j)
        {
            int paint_w = 0;
            int paint_b = 0;

            for (int x = i; x < i + 8; ++x)
            {
                for (int y = j; y < j + 8; ++y)
                {
                    if ((x + y) % 2 == 0)
                    {
                        if (v[x][y] != 'W') paint_w++;
                        if (v[x][y] != 'B') paint_b++;
                    }
                    else
                    {
                        if (v[x][y] != 'B') paint_w++;
                        if (v[x][y] != 'W') paint_b++;
                    }
                }
            }

            min_paint = min(min_paint, paint_w);
            min_paint  = min(min_paint, paint_b);
        }
    }

    cout  << min_paint;
}

signed main()
{
    fast;
    solve();
    return 0;
}