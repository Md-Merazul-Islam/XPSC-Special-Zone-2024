
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
ll n,m,t,q;
void mdmerazulislam()
{
    ll l, r, k;
    cin >> n >> q;
    vector<ll> v(n + 1);
    ll su = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        su += v[i];
    }
    vector<ll> pref(n + 1);
    pref[1] = v[1];
    for (int i = 2; i <= n; ++i)
    {
        pref[i] = pref[i - 1] + v[i];
    }
    while (q--)
    {
        cin >> l >> r >> k;
        ll su1 = pref[r] - pref[l - 1];
        if ((su - su1 + (r - l + 1) * k) % 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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