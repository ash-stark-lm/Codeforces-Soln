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
    vector<int> a(n), b(n);
    inputarr(a, n);
    inputarr(b, n);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int total_diff = 0;
    // we can increment 1 at max
    bool possible = true;
    for (int i = 0; i < n; i++) {
      if (b[i] < a[i] || b[i] - a[i] > 1) {
        possible = false;
        break;
      }
      total_diff += b[i] - a[i];
    }
    if (total_diff <= n && possible) {
      YES;
    } else {
      NO;
    }
  }
  return 0;
}