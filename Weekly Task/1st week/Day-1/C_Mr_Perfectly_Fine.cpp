
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
    int a_min = INT_MAX, b_min = INT_MAX, equal = INT_MAX;
    while (n--)
    {
        int x;
        string a;
        cin >> x >> a;
        if (a == "01")
        {
            a_min = min(a_min, x);
        }
        else if (a == "10")
        {
            b_min = min(b_min, x);
        }
        else if (a == "11")
        {
            equal = min(equal, x);
        }
    }
    if ((a_min == INT_MAX || b_min == INT_MAX) && equal == INT_MAX )
    {
        cout << "-1\n"; 
        return;
    }
    if (a_min == INT_MAX || b_min == INT_MAX) {
        cout << equal << "\n"; // If only one skill can be acquired
        return;
    }
    int tmp = a_min + b_min;
    if (tmp <= equal)
    {
        cout << tmp << "\n";
    }
    else
    {
        cout << equal << "\n";
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