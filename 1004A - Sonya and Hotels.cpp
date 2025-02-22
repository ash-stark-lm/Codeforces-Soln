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
  int n, d;
  cin >> n >> d;
  vi(n);

  int ans = 0;
  ans += 2; // on both ends
  for (int i = 0; i < n - 1; i++) {
    int gap = v[i + 1] - v[i];

    if (gap > 2 * d) {
      ans += 2; // Two positions possible
    } else if (gap == 2 * d) {
      ans += 1; // Exactly one extra position possible
    }
  }
  cout << ans << endl;

  return 0;
}