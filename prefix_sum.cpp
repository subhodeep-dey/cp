#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define by cin.tie(NULL);
#define black_heretic cout.tie(NULL);
#define fl(n) for (int i = 0; i < n; i++)
#define rl(m, n) for (int i = n; i >= m; i--)
typedef long long ll;
#define read(x) ll x; cin >> x
using namespace std;
 
// Remark: NIL.
 
void solve() {
    ll t, i, n;
    cin >> n;
    ll arr[n], pf[n];
    
    for(i=1; i<=n; ++i) {
        cin >> arr[i];
        pf[i] = pf[i-1] + arr[i];
    }
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        cout << pf[r+1] - pf[l] << endl;
    }
 
return;
}
 
signed main(){
    Code by black_heretic
    // read(t); while(t--)
        solve();
    return 0;
} 
