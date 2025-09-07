// https://www.acmicpc.net/problem/30802
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
    int n;
    int size[6];
    int t,p;

    cin >> n;
    cin >> size[0] >> size[1] >> size[2] >> size[3] >> size[4] >> size[5];
    cin >> t >> p;

    int shirts = 0;
    for (int i = 0; i < 6; ++i)
    {
        if (size[i] == 0) continue;

        if (t >= size[i])
        {
            shirts++;
            continue;
        }

        int g = size[i] / t;
        if (size[i] % t > 0) g++;
        shirts += g;
    }

    int pp = n / p;
    int ppp = n % p;

    cout << shirts << "\n" << pp << " " << ppp;
}

signed main()
{
    fast;
    solve();
    return 0;
}