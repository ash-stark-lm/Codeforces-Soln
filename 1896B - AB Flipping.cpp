#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // ans wil be last b-first a or 0 for case when BBAA type

    int mn = n, mx = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'A')
        mn = min(mn, i);
      else
        mx = i;
    }
    cout << max(0ll, mx - mn) << endl;
  }
  return 0;
}
