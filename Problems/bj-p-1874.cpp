// https://www.acmicpc.net/problem/1874
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
    int n; cin >> n;
    string result = "";
    vector<int>v;
    stack<int>s2;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        v.push_back(a);
    }

    s2.push(0);

    int idx = 0;
    int s1 = 1;
    while (idx < n) {
        if (s2.top() == v[idx]) {
            result += "-\n";
            s2.pop();
            idx++;
        }
        else if (s2.top() < v[idx]) {
            s2.push(s1);
            s1++;
            result += "+\n";
        }
        else if (s2.top() > v[idx]) {
            result = "NO";
            break;
        }
    }

    cout<<result;
}

signed main()
{
    fast;
    solve();
    return 0;
}