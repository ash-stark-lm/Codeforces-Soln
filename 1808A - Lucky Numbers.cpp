#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define int long long
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int l, r;
    cin >> l >> r;
    int maxi = -1, ans = 0;
    if (r - l < 100) {
      // try all possible number
      for (int i = l; i <= r; i++) {
        string s = to_string(i);
        sort(s.begin(), s.end());
        int m = s[s.length() - 1] - s[0];
        if (m > maxi) {
          maxi = m;
          ans = i;
        }
      }
    } else {
      for (int k = l; k <= r; k++) {
        if (k % 100 == 90) {
          ans = k;
          break;
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}
