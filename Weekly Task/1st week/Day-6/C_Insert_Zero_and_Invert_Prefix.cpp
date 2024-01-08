
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
#define N 100005
int n, a[N], op[N], tot;
void mdmerazulislam()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    if (a[n] == 1)
    {
        no;
        return;
    }
    yes;
    tot = 0;
    for (int i = 1, j = 0; i <= n; ++i)
    {
        if (!a[i])
        {
            op[++tot] = i - j - 1;
            for (int k = j + 1; k < i; ++k)
            {
                op[++tot] = 0;
            }
            j = i;
        }
    }

    for (int i = tot; i > 0; --i)
    {
        cout << op[i] << ((i == 1) ? "\n" : " ");
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        mdmerazulislam();
    }

    return 0;
}
