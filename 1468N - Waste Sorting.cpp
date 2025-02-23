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
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    if (c1 < a1 || c2 < a2 || c3 < a3) {
      NO;
      continue;
    }

    c1 -= a1;
    c2 -= a2;
    c3 -= a3;

    a4 -= min(a4, c1);
    a5 -= min(a5, c2);

    if (c3 >= (a4 + a5)) {
      YES;
    } else {
      NO;
    }
  }

  return 0;
}