
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
    ll n, s;
    cin >> n >> s;
    vi a(n);
    loop(i, 0, n) cin >> a[i];
    ll l = 0, sum = 0, mn = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum >= s)
        {
            mn = min(mn, i - l + 1);
            sum -= a[l];
            l++;
        }
    }
    if (mn == LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mn << endl;
    }

    return 0;
}