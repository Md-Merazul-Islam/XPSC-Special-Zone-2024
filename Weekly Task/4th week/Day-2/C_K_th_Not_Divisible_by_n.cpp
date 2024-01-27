/**************بسم الله الرحمن الرحيم*************
***********************❀‿❀************************/

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<int, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nl "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

bool ok(ll mid, ll n, ll k)
{
    return mid - mid / n >= k;
}

void mdmerazulislam()
{
    long long n, k, count = 0;
    cin >> n >> k;

    ll l = 1, r = 1e18;
    while (l < r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid, n, k))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << r << nl;
    cout << r << nl;
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();

    return 0;
}