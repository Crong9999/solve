// https://www.acmicpc.net/problem/2941
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
    string s;
    cin >> s;
    int len = s.length();
    int find = 0;

    for(int i = s.length(); i > 0; --i)
    {
        if (s[i] == '=')
        {
            if (s[i - 1] == 'z')
            {
                if ((i - 2) >= 0)
                {
                    if (s[i - 2] == 'd')
                    {
                        find += 2;
                        i -= 2;
                        continue;
                    }
                }

                find++;
                i--;
                continue;
            }

            if (s[i - 1] == 's' || s[i - 1] == 'c')
            {
                find++;
                i--;
                continue;
            }
        }

        if (s[i] == '-')
        {
            if (s[i - 1] == 'c' || s[i - 1] == 'd')
            {
                find++;
                i--;
                continue;
            }
        }

        if (s[i] == 'j')
        {
            if (s[i - 1] == 'l' || s[i - 1] == 'n')
            {
                find++;
                i--;
                continue;
            }
        }
    }

    cout << len - find;
}

signed main()
{
    fast;
    solve();
    return 0;
}