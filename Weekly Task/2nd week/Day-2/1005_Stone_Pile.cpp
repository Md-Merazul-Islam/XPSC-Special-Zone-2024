
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
#define ln "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }

vi a(23);
bool visited[25];
ll sum = 0;
ll ans = INT_MAX;

void back(int n, vi &v,int s1)
{
   
    ll s2 = sum - s1;
    ans = min(ans, abs(s2 - s1));

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            v.push_back(i);
            back(n, v,s1+a[i]);
            visited[i] = false;
            v.pop_back();
        }
    }
}

void mdmerazulislam()
{
}

int main()
{
    fast;

    int n;
    cin >> n;
    vi v;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    memset(visited, false, sizeof(visited));
    back(n, v,0);
    cout << ans << ln;

    return 0;
}