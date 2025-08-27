// https://www.acmicpc.net/problem/2720
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
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int c;
        cin >> c;

        int quarter = 0;
        int dime = 0;
        int nickel = 0;
        int penny = 0;

        while (c > 0)
        {
            if (c >= 25)
            {
                c -= 25;
                quarter++;
            }
            else if (c >= 10)
            {
                c -= 10;
                dime++;
            }
            else if (c >= 5)
            {
                c -= 5;
                nickel++;
            }
            else
            {
                c--;
                penny++;
            }
        }

        cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << endl;
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}