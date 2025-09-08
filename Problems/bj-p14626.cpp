// https://www.acmicpc.net/problem/14626
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

    int weight = 1;
    int lostWeight = 1;
    int lostN = 0;
    int sum = s[12] - '0';

    for (int i = 0; i <= 11; ++i)
    {
        if (s[i] == '*')
        {
            lostWeight = weight;
        }
        else
        {
            int n = s[i] - '0';
            sum += weight * n;
        }

        weight = weight == 1 ? 3 : 1;
    }

    int v = (10 - (sum % 10));

    for (int i = 0; i <= 9; ++i)
    {
        if (lostWeight * i % 10 == v)
        {
            lostN = i;
            break;
        }
    }
    cout << lostN;
}

signed main()
{
    fast;
    solve();
    return 0;
}