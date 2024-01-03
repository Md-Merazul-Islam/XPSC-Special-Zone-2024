
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

    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    loop(i, 0, n)
    {
        cin >> a[i];
    }
    loop(i, 0, m)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, ans = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            int cnt1 = 1, cnt2 = 1;
            while (i + 1 < a.size() && a[i] == a[i + 1])
            {
                cnt1++;
                i++;
            }
            while (j + 1 < b.size() && b[j] == b[j + 1])
            {
                cnt2++;
                j++;
            }
            ans += cnt1 * cnt2;
            i++;
            j++;
        }
    }
    cout << ans << endl;

    return 0;
}