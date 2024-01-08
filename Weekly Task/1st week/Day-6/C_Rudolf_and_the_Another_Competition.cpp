
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<vector<ll>> ans;
        ll ind = 0;
        for (int i = 0; i < n; ++i)
        {
            vector<ll> lst(m);
            for (int j = 0; j < m; ++j)
            {
                cin >> lst[j];
            }
            sort(lst.begin(), lst.end());
            ll sum = 0, time = 0, penalty = 0;
            for (int j = 0; j < m; ++j)
            {
                if (lst[j] + time <= h)
                {
                    sum += 1;
                    time += lst[j];
                    penalty += time;
                }
                else
                {
                    break;
                }
            }
            ans.push_back({-sum, penalty, ind});
            ind += 1;
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); ++i)
        {
            if (ans[i][2] == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}