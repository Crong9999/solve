// https://www.acmicpc.net/problem/9375
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
        int n;
        cin >> n;
        cin.ignore();

        unordered_map<string, vector<string>> clothes;

        for (int i = 0; i < n; ++i)
        {
            string s, ss;
            cin >> s >> ss;
            clothes[ss].push_back(s);
        }

        int mul = 1;
        for (auto it = clothes.begin(); it != clothes.end(); ++it)
        {
            int c = it->second.size() + 1;
            mul *= c;
        }

        cout << mul - 1 << "\n";


        t--;
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}