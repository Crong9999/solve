// https://www.acmicpc.net/problem/11723
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

struct CSet
{
    vector<int> s;

    CSet()
    {
        s.assign(21, 0);
    }

    void add(int x)
    {
        s[x] = 1;
    }

    void remove(int x)
    {
        s[x] = 0;
    }

    int check(int x)
    {
        return s[x];
    }

    void toggle(int x)
    {
        s[x] = s[x] == 1 ? 0 : 1;
    }

    void all()
    {
        for (int i = 0; i < 21; ++i)
        {
            s[i] = 1;
        }
    }

    void empty()
    {
        for (int i = 0; i < 21; ++i)
        {
            s[i] = 0;
        }
    }
};

void solve()
{
    int t;
    cin >> t;
    cin.ignore();

    CSet S;

    while (t > 0)
    {
        string s;
        getline(cin, s);

        size_t pos = s.find(" ");
        string command = s.substr(0, pos);
        int num = 0;
        if (!(command == "all" || command == "empty"))
        {
            num = stoi(s.substr(pos, s.length() - pos));
        }

        if (command == "add")
        {
            S.add(num);
        }
        else if (command == "remove")
        {
            S.remove(num);
        }
        else if (command == "check")
        {
            cout << S.check(num) << "\n";
        }
        else if (command == "toggle")
        {
            S.toggle(num);
        }
        else if (command == "all")
        {
            S.all();
        }
        else if (command == "empty")
        {
            S.empty();
        }
        else
        {
            cout << "Error\n";
        }

        t--;
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}