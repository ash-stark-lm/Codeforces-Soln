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
#define vi(n) vector<int> v(n);

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vi(n);
    inputarr(v, n);

    vector<int> mx;
    for (int i = 0; i < n - 1; i++) {
      mx.pb(max(v[i], v[i + 1]));
    }
    int min = *min_element(mx.begin(), mx.end());
    cout << min - 1 << endl;
  }

  return 0;
}