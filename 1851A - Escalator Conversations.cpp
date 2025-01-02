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
    int n, m, k, h;
    cin >> n >> m >> k >> h;

    vi(n);
    int cnt = 0;

    int mx_diff = (m - 1) * k;

    for (int i = 0; i < n; i++) {
      v[i] = abs(v[i] - h);
      if (v[i] % k == 0 && v[i] <= mx_diff && v[i] > 0)
        cnt++;
    }
    cout << cnt << endl;
  }

  return 0;
}