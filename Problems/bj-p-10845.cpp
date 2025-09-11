// https://www.acmicpc.net/problem/10845
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

    queue<int> q;

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
            q.push(pushN);
        }
        else if (s == "pop")
        {
            if (q.empty())
            {
                cout << "-1\n"; 
            }
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (s == "size")
        {
            cout << q.size() << "\n";
        }
        else if (s == "empty")
        {
            if (q.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (s == "front")
        {
            if (q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << q.front() << "\n";
            }
        }
        else if (s == "back")
        {
            if (q.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << q.back() << "\n";
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