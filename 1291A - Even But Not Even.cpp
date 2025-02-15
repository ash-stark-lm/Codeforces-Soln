#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back

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
    vector<int> oddind;
    for (int i = 0; i < n; i++) {
      if ((s[i] - '0') % 2 != 0)
        oddind.pb(i);
    }
    if (oddind.size() < 2)
      cout << -1 << endl;
    else {
      string ans = "";
      ans += s[oddind[0]];
      ans += s[oddind[1]];
      cout << ans << endl;
    }
  }

  return 0;
}
