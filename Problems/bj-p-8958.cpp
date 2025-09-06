// https://www.acmicpc.net/problem/8958
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
    int t;
    cin >> t;
    while (t > 0)
    {
        string s;
        cin >> s;

        int sum = 0;
        int current = 0;
        for (const char& c : s)
        {
            if (c == 'O')
            {
                current++;
            }
            else if (c == 'X')
            {
                current = 0;
            }

            sum += current;
        }

        cout << sum << '\n';

        t--;
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}