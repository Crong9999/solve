// https://www.acmicpc.net/problem/2798
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

    vector<int> v(n, 0);

    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a > m) continue;
        v[i] = a;
    }

    sort(v.begin(), v.end());

    int sum = 0;

    for (int i = 0; i < v.size() - 2; ++i)
    {
        for (int j = 0; j < v.size(); ++j)
        {
            if (i == j) continue;

            for (int k = 0; k < v.size(); ++k)
            {
                if (i == k || j == k) continue;

                int s = v[i] + v[j] + v[k];
                if (s <= m && s > sum)
                {
                    sum = s;
                }
            }
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