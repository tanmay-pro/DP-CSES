#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

int main()
{
    amazing;

    ll n;
    cin >> n;
    ll res[n + 1];
    fo(i, n + 1)
    {
        res[i] = 0;
    }
    res[0] = 1;
    res[1] = 1;
    res[2] = 2;
    bool check[n + 1];
    fo(i, n + 1)
    {
        check[i] = false;
    }
    check[0] = true;
    check[1] = true;
    check[2] = true;
    fo(i, n + 1)
    {
        if (check[i] == true)
        {
            continue;
        }
        if (i > 6)
        {
            fo(j, 6)
            {
                res[i] += res[i - j - 1] % m;
            }
            check[i] = true;
        }
        else
        {
            fo(j, i)
            {
                res[i] += res[j] % m;
            }
            check[i] = true;
        }
    }
    cout << res[n] % m;
    br;
    return 0;
}