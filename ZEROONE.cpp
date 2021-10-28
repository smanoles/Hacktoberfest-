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
    int n;cin>> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> aa,bb;
    for(int i = 0; i < n; i++){
        if(i&1){
            bb.push_back(a[i]);
        }else{
            aa.push_back(a[i]);
        }
    }
    sort(aa.begin(),aa.end(),greater<int>());
    sort(bb.begin(),bb.end());
    int it1 = 0, it2 = 0;
    ll result = 0;
    ll temp = 0;
    for(int i = 0; i < n; i++){
        if(i&1){
            a[i] = bb[it2++];
            result += a[i]*temp;
        }else{
            a[i] = aa[it1++];
            temp += a[i];
        }
        cout << a[i] << " ";
    }
    cout << nline << result << nline;
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

// input
// 1
// 4
// 2 3 4 3

// output
// 4 3 2 3
// 30

