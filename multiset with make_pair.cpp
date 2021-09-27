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
// Remark: Reference from GfG and StackOverflow again.
void solve() {
  ll i, s, n, x, y, loss=0;
  multiset< pair<ll, ll> >::iterator itr;
  multiset< pair<ll, ll> > lvl;
  cin >> s >> n;
  for (i = 0; i < n; i++) {
    cin >> x >> y;
    lvl.insert(make_pair(x, y));
  }
  for (itr = lvl.begin(); itr!=lvl.end(); itr++) {
    if(s > itr->first){
      s += itr->second; 
    }
    else{
      loss = 1;
      break;
    }
  }
  if(loss == 0) cout << "YES";
  else cout << "NO";
  
return;
}
signed main(){
    Code by black_heretic
    // read(t); while(t--)
        solve();
}
