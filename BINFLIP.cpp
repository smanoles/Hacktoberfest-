#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
#define TLE_ka_Chakkar ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
ll mod = 1e9+7;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void solve(){
    ll n,k;cin >> n >> k;
    if(k == 0){
        cout << "YES\n0\n";
        return;
    }
    if(k%2 == 0){
        cout << "NO\n";
        return;
    }
    ll temp = 0;
    for(ll i = 31; i >= 0; i--){
        if(((1<<i)&k)!=0){
            temp = i+1;
            break;
        }
    }
    k = (k + (1<<temp)-1)/2;
    cout << "YES\n" << temp << nline;
    int answer = 1;
    vector<int> v;
    for(int i = temp-2; i >= 0;i--){
        if(((1<<i)&k)!=0){
            v.push_back(answer);
            answer += (1<<i);
        }else{
            answer -= (1<<i);
            v.push_back(answer);
        }
    }
    for(int i = temp - 2; i >= 0; i--){
        cout << v[i] << nline;
    }
    cout << answer << nline;
}
int main()
{
    TLE_ka_Chakkar
    #ifndef ONLINE_JUDGE
        cerr << "Time : " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
    #endif
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif

    ll test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}

// Input
// 3
// 5 0
// 3 3
// 2 2

// Output
// YES
// 0
// YES
// 2
// 3
// 1
// NO
