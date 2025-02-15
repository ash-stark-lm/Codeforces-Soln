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
    int n;
    cin >> n;
    vi(n);

    int k = 0;

    for (int i = 0; i < n; i++) {
      if (v[i] % 2 == 0) {
        while (v[i] % 2 == 0 && v[i] > 0) {
          v[i] /= 2;
          k++;
        }
      }
    }
    sort(v.begin(), v.end());

    for (int i = 1; i <= k; i++) {
      v[n - 1] *= 2;
    }
    int ans = 0;
    for (int x : v) {
      ans += x;
    }
    cout << ans << endl;
  }
  return 0;
}
