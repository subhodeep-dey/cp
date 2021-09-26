// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#include  <iostream>
#define Code ios_base::sync_with_stdio(false);
#define by cin.tie(NULL);
#define black_heretic cout.tie(NULL);
#define fl(n) for (int i = 0; i < n; i++)
#define rl(m, n) for (int i = n; i >= m; i--)
typedef long long ll;
#define read(x) ll x; cin >> x
using namespace std;
// Remark - Reference from YT, StackOverflow and GfG.
void solve() {
  ll i, n, oldval, newval, maxval = 0;
  string s;
  getline(cin, s);
  n = s.length();
  char arr[n], maxkey = ' ';
  for(i = 0; i < n; i++) arr[i] = s[i];
  unordered_map<char, int> mp;
  // for(i = 0; i < n; i++) cout << arr[i] << " "; 
  // cout << endl;
  for(i = 0; i < n; i++){
    if(mp.count(arr[i]) == 0) mp[arr[i]] = 1;
    else{
      oldval = mp.at(arr[i]);
      newval = oldval + 1;
      mp[arr[i]] = newval;
    }
  }
  for(auto it = mp.begin(); it != mp.end(); it++){
    if(it->second > maxval){
      maxval = it->second;
      maxkey = it->first;
    }
    else if(it->second == maxval && int(it->first) < int(maxkey)){
      maxval = it->second;
      maxkey = it->first;
    }
  }
  cout << maxkey << " " << maxval;
  return;
}
 
signed main(){
    Code by black_heretic
    //read(t); while(t--)
        solve();
    return 0;
}
