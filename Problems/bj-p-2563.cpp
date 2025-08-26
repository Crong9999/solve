// https://www.acmicpc.net/problem/2563
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
    vector<vector<int>> v(100, vector<int>(100, 0));

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int l, b;
        cin >> l >> b;

        for (int j = l; j < l + 10; ++j)
        {
            for (int k = b; k < b + 10; ++k)
            {
                v[j][k] = 1;
            }
        }
    }

    int sum = 0;
    for (const auto& row : v)
    {
        for (const int val : row)
        {
            if (val == 1)
            sum++;
        }
    }

    cout << sum;
}

signed main()
{
    fast;
    solve();
    return 0;
}