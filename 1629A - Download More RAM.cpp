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
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    inputarr(a, n);
    inputarr(b, n);

    vector<pair<int, int>> r(n);
    fo(i, n) r[i] = {a[i], b[i]};
    sort(r.begin(), r.end());
    int curr_capacity = k;
    for (int i = 0; i < n; i++) {
      if (r[i].first <= curr_capacity) {
        curr_capacity += r[i].second;
      } else
        break;
    }
    cout << curr_capacity << endl;
  }

  return 0;
}