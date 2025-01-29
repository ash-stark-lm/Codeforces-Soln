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
    int a, b;
    cin >> a >> b;

    if (a > b)
      swap(a, b);
    int ans = b - a;

    if (ans == 0) {
      cout << 0 << " " << 0 << endl;
      continue;
    }
    int more = a % ans;    // increment
    int less = ans - more; // decrement
    cout << ans << " " << min(more, less) << endl;
  }
  return 0;
}