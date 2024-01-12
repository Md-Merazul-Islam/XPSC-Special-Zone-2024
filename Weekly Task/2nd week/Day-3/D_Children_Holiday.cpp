
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**            https://github.com/Md-Merazul-Islam            **
**************************************************************/
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}


ll cal(ll t, ll z, ll y, ll mid)
{
    ll p = t * z + y;
    return mid / p * z + min((mid % p) / t, z);
}

bool canBlow(ll m, ll n, vi &t, vi &z, vi &y, ll mid)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += cal(t[i], z[i], y[i], mid);
        if (cnt >= m)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    fast;
    ll n, m;
    while (cin >> m >> n)
    {
        vi t(n), z(n), y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> t[i] >> z[i] >> y[i];
        }

        ll l = -1, r =1e9+4;

        while (l + 1 < r)
        {
            ll mid = l + (r - l) / 2;
            if (canBlow(m, n, t, z, y, mid))
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }

        cout << r << endl;

        ll remaining = m;
        for (int i = 0; i < n; i++)
        {
            ll num = cal(t[i], z[i], y[i], r);
            if (num > remaining)
            {
                num = remaining;
            }
            remaining -= num;
            cout << num << " ";
        }

        nl;
    }

    return 0;
}

