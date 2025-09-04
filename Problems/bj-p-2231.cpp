// problem link
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
    cin >> n;

    int start_k = max(1, n - 100);
    int result = 0;

    for (int k = start_k; k < n; ++k)
    {
        int sum = k;
        int temp_k = k;

        while (temp_k > 0)
        {
            sum += temp_k % 10;
            temp_k /= 10;
        }

        if (sum == n)
        {
            result = k;
            break;
        }
    }

    cout << result;
}

signed main()
{
    fast;
    solve();
    return 0;
}