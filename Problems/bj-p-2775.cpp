// https://www.acmicpc.net/problem/2775
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
        int k, n;
        cin >> k;
        cin >> n;

        vector<vector<int>> v(k+1, vector<int>(15, 0));

        // init zero floor.
        for (int i = 1; i <= 14; ++i)
        {
            v[0][i] = i;
        }

        //A[k][n] = A[k][n-1] + A[k-1][n]
        for (int i = 1; i <= k; ++i)
        {
            for (int j = 1; j <= 14; ++j)
            {
                v[i][j] = v[i][j - 1] + v[i - 1][j];
            }
        }

        cout << v[k][n] << "\n";

        t--;
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}