
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
    ll n;cin>>n;
    string s;cin>>s;
    ll z=0,on=0,k=n;
    vi ans;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='0'){
            z++;
            ans.push_back(i+1);
        }else{
            if(on==0)k=i;
            on++;
        }
    }
    if(z==0 && n==1){
        cout<<-1<<endl;return;
    }
    ll pos;
    for(int i=0; i<z; i++)
    {
        if(i==0){
            pos=n-ans[i];
            cout<<pos<<" ";
            n--;
        }
        else{
            ll tmp= pos+=(n-ans[i]);
            pos=tmp;
            cout<<pos<<" ";
            n--;
        }
    }
    for(int i=0; i<on; i++)cout<<-1<<" ";
    nl;

}

int main()
{
    fast;
    
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
}