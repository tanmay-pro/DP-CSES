#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define PI 3.14159265
#define br cout << endl
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
int m = 1e9 + 7;
int p = 31;

ll ans[1000001];

int main()
{
    amazing;
    int n, x;
    cin >> n >> x;
    vi coins(n);
    fo(i, n)
    {
        cin >> coins[i];
    }
    ans[0] = 1;
    for (int weight = 0; weight <= x; weight++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (weight - coins[i - 1] >= 0)
            {
                ans[weight] += ans[weight - coins[i - 1]];
                ans[weight] %= m;
            }
        }
    }
    cout << ans[x];
    br;
    return 0;
}