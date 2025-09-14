// https://www.acmicpc.net/problem/1436
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

    int count = 1;
    int out = 666;

    while (count != n)
    {
        int tmp = ++out;
        int cnt = 0;

        while (tmp)
        {
            if (tmp % 10 == 6)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            if (cnt == 3)
            {
                count++;
                cnt = 0;
                break;
            }

            tmp /= 10;
        }
    }

    cout << out;
}

signed main()
{
    fast;
    solve();
    return 0;
}