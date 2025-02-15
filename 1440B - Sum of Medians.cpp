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
    int n, k;
    cin >> n >> k;
    int m = n * k;
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
      cin >> v[i];
    }
    int ans = 0;
    int i = m;
    while (k--) {
      i = i - ((n / 2) + 1);
      ans += v[i];
    }
    cout << ans << endl;
  }

  return 0;
}