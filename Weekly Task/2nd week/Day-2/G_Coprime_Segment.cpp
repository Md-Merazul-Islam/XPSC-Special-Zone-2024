
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
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}

struct Stack {
    vi stk, val = {0};

    void push(ll x) {
        stk.push_back(x);
        val.push_back(__gcd(val.back(), x));
    }
    ll top() {
        return val.back();
    }

    ll pop() {
        ll x = stk.back();
        stk.pop_back();
        val.pop_back();
        return x;
    }

    bool empty() {
        return stk.empty();
    }
};

void remove(Stack &s1, Stack &s2) {
    if (s1.empty()) {
        while (!s2.empty())
            s1.push(s2.pop());
    }
    s1.pop();
}

int main() {
    int n;
    cin >> n;
    vi v(n);
    for (auto &x : v)
        cin >> x;
    Stack s1, s2;
    int l = 0, ans = n + 1;
    for (int i = 0; i < n; ++i) {
        s2.push(v[i]);
        while (__gcd(s1.top(), s2.top()) == 1) {
            remove(s1, s2);
            ans = min(ans, i - l + 1);
            ++l;
        }
    }
    if (ans > n)
        ans = -1;
    cout << ans << endl;

    return 0;
}
