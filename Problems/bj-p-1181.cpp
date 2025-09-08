// https://www.acmicpc.net/problem/1181
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


bool alphacompare(const string& s1, const string& s2)
{
    if (s1.length() < s2.length())
    {
        return true;
    }
    else if (s1.length() == s2.length())
    {
        for (int i = 0; i < s1.length(); ++i)
        {
            if (s1[i] == s2[i]) continue;

            if (s1[i] < s2[i])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;

    vector<string> v;
    unordered_set<string> sv;

    while (n > 0)
    {
        string s;
        cin >> s;

        sv.insert(s);

        n--;
    }

    for (const string& s : sv)
    {
        v.push_back(s);
    }

    sort(v.begin(), v.end(), alphacompare);

    for (const string& s : v)
    {
        cout << s << "\n";
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}