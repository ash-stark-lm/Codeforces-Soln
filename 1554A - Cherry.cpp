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
    // give 1<=l<r<=n
    // so min 2 size subarray hoga hee so if we check for adjacent elements its
    // done
    int mx = 0;
    for (int i = 0; i < n - 1; i++) {
      int maxi = max(v[i], v[i + 1]);
      int mini = min(v[i], v[i + 1]);
      mx = max(mx, maxi * mini);
    }
    cout << mx << endl;
  }

  return 0;
}