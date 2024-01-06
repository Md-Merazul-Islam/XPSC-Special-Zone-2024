
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**                  Sreepur, Gazipur, Dhaka                  **
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
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }

void mdmerazulislam()
{
}
int main()
{
    fast;

    string s;
    cin >> s;
    ll a, b, c;
    cin >> a >> b >> c;
    ll a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    ll r;
    cin >> r;

    ll l = 0, hg = 1e13;
    ll k = count(s.begin(), s.end(), 'B');
    ll m = count(s.begin(), s.end(), 'S');
    ll p = count(s.begin(), s.end(), 'C');

    ll ans = 0;
    while (l <= hg)
    {
        ll mid = l + (hg - l) / 2;

        ll r1 = max(0LL, k * mid - a);
        ll r2 = max(0LL, m * mid - b);
        ll r3 = max(0LL, p * mid - c);

        ll cost = r1 * a1 + r2 * b1 + r3 * c1;

        if (cost <= r)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            hg = mid - 1;
        }
    }

    cout << ans << nn;

    return 0;
}
