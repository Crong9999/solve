// https://www.acmicpc.net/problem/1929
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
    vector<bool> prime(1000001, true);

    prime[1] = false;

    for (int i = 2; i <= sqrt(1000000); ++i)
    {
        if  (!prime[i]) continue;

        for (int j = 2; i * j <= 1000000; j++)
        {
            prime[i * j] = false;
        }
    }

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; ++i)
    {
        if (prime[i])
        {
            cout << i << "\n";
        }
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}