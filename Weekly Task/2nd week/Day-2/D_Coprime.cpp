
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
    int n;
    cin >> n;
    vi a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    vector<int> cop[1111];

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                cop[i].push_back(j);
            }
        }
    }
    ll ans = 0;
    vi mx(1111, -1);
    for (int i = 1; i <= n; i++)
    {
        mx[a[i]] = i;
    }
    for (int i = 1; i <= 1000; i++)
    {
        if (mx[i] == -1)
            continue;
        if (i == 1)
        {
            ans = max(ans, 2 * mx[i]);
            continue;
        }
        for (auto val :cop[i]){
            if(mx[val]!=-1)ans= max(ans,mx[i]+mx[val]);
        }
    }
    if(ans==0)ans=-1;
    cout<<ans<<endl;
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