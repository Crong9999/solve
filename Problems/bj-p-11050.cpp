// https://www.acmicpc.net/problem/11050
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

int fac(int n)
{
    int res = 1;
    for (int i = 1; i <= n; ++i)
    {
        res *= i;
    }
    return res;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    int t, b1, b2;

    t = fac(n);
    b1 = fac(n-k);
    b2 = fac(k);

    cout << t / (b1 * b2);
}

signed main()
{
    fast;
    solve();
    return 0;
}