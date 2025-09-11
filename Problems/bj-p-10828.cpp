// https://www.acmicpc.net/problem/10828
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
    cin.ignore();

    stack<int> sta;

    while (n > 0)
    {
        string s;
        getline(cin, s);

        int pushN = -1;

        if (s.find(' ') != string::npos)
        {
            string sb = s.substr(s.find(' '), s.length() - s.find(' '));
            pushN = stoi(sb);
        }

        if (pushN != -1)
        {
            sta.push(pushN);
        }
        else if (s == "pop")
        {
            if (sta.empty())
            {
                cout << "-1\n"; 
            }
            else
            {
                cout << sta.top() << "\n";
                sta.pop();
            }
        }
        else if (s == "size")
        {
            cout << sta.size() << "\n";
        }
        else if (s == "empty")
        {
            if (sta.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (s == "top")
        {
            if (sta.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << sta.top() << "\n";
            }
        }

        n--;
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}