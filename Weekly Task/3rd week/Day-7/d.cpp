#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(int n, int t)
{
    if (t == n)
    {
        return true;
    }
    if (t > n)
    {
        return false;
    }
    bool result1 = solve(n, t * 10);
    bool result2 = solve(n, t * 20);
    if (result1 || result2)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (solve(n, 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}