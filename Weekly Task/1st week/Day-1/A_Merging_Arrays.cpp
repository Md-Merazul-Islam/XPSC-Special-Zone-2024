
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

void mdmerazulislam()
{
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    loop(i, 0, n) cin >> a[i];
    loop(i, 0, m) cin >> b[i];
    vi ans;
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[i])
        {
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);j++;
        }
    }

    while (i < a.size())
    {
        ans.push_back(a[i]);
        i++;
    }
    while (j < b.size())
    {
        ans.push_back(b[j]);
        j++;
    }

    srt(ans);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

int main()
{
    fast;

    mdmerazulislam();

    return 0;
}