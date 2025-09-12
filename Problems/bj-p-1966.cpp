// https://www.acmicpc.net/problem/1966
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
    int t, n, m;
    cin >> t;

    while (t > 0)
    {
        cin >> n >> m;

        queue<pair<int, int>> q;
        vector<int> v;

        for (int i = 0; i < n; ++i)
        {
            int input;
            cin >> input;
            q.push(make_pair(i, input));
            v.push_back(input);
        }

        sort(v.begin(), v.end(), greater<int>());


        int c = 0;
        for (int i = 0; i < n; ++i)
        {
            while(1)
            {
                if (q.front().second == v[i])
                {
                    if (q.front().first == m)
                    {
                        c = i + 1;
                    }

                    q.pop();
                    break;
                }

                pair<int, int> tmp = q.front();
                q.pop();
                q.push(tmp);
            }
        }

        cout << c << "\n";

        t--;
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}