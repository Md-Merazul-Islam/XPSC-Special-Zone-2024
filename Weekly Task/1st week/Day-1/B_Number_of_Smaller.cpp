
// /**************************************************************
// **               BISMILLAH HIR RAHMAN NIR RAHIM              **
// **                  Author: Md Merazul Islam                 **
// **                         CST, MPI                          **
// **                  Sreepur, Gazipur, Dhaka                  **
// **************************************************************/
// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14159265359
// #define dmin 1e-9
// #define dd double
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define pb push_back
// #define vi vector<ll>
// #define vpi vector<pair<ll, int>>
// #define srt(a) sort(a.begin(), a.end())
// #define rsrt(a) sort(a.rbegin(), a.rend())
// #define nn "\n"
// #define nl cout << "\n"
// #define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
// #define loop(i, a, b) for (int i = (a); i < (b); ++i)
// #define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
// void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<" ";}

// void mdmerazulislam()
// {
//     int n, m;
//     cin >> n >> m;
//     vi a(n), b(m);
//     loop(i, 0, n) cin >> a[i];
//     loop(i, 0, m) cin >> b[i];
//     vi ans;
//     for (int i = 0; i < m; i++)
//     {
//         ll cnt =lower_bound(a.begin(),a.end(),b[i])-a.begin();
//         ans.push_back(cnt);
//     }
//     print(ans);
// }

// int main()
// {
//     fast;

//     mdmerazulislam();

//     return 0;
// }







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
void mdmerazulislam()
{

}
int main()
{
    fast;
    int n,m;cin>>n>>m;
    vi a(n),b(m);
    loop(i,0,n)cin>>a[i];
    loop(i,0,m)cin>>b[i];
    for(int i=0; i<m; i++){
        int l=0,r= n-1, cnt =0;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(a[mid]<b[i]){
                cnt=mid+1;
                l = mid+1;
            }else {
                r=mid-1;
            }
        }cout<<cnt<<" ";
    }

    return 0;
}