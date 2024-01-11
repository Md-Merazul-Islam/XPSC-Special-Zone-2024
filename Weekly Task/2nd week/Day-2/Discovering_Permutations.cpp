
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
bool visited[27];
int k;
int test = 1;
int cnt;
void backtrck(int n, vi &a)
{
    if (cnt >= k)
        return;
    if (a.size() == n)
    {

        for (int val : a)
            cout << char(val + 64);
        nl;
        cnt++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            a.push_back(i);
            backtrck(n,a);
            a.pop_back();
            visited[i] = false;
        }
    }
}

void mdmerazulislam()
{
    int n;
    cin >> n >> k;
    cout << "Case " << test++ << ":" << nn;
    memset(visited, false, sizeof(visited));
    vi a;
    cnt = 0;
    backtrck(n, a);
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