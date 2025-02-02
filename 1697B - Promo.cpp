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

  int n, q;
  cin >> n >> q;
  vi(n);
  sort(v.rbegin(), v.rend());

  // Compute prefix sums
  vector<int> prefix(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + v[i - 1];
  }

  cout << endl;

  while (q--) {
    int x, y;
    cin >> x >> y;
    // x-(x-y)-> gives sum of y elements

    cout << prefix[x] - prefix[x - y] << endl;
  }

  return 0;
}