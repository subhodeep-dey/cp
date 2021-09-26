// Ques - https://www.codechef.com/problems/MAXPOINT
// Sol  - https://www.codechef.com/viewsolution/51461485

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

// Useful copy paste.
// for(i = 0; i < n; i++)
//ll i, n;
//cin >> n;

// Remark: Hint from https://www.codechef.com/viewsolution/51460070.
 
signed main(){
    Code by black_heretic
    int t;
    cin >> t;
    while(t--){
        ll i, n, a, b, c, x, y, z, q1, q2, q3, ans = 0;
        cin >> a >> b >> c; // Time (min)
        cin >> x >> y >> z; // Marks

        for(q1=0; q1<=20; q1++){
            for(q2=0; q2<=20; q2++){
                for(q3=0; q3<=20; q3++){
                    if((a*q1+b*q2+c*q3) <= 240) ans = max(ans, x*q1+y*q2+z*q3);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
