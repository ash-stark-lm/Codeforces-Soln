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
    int r, g, b;
    cin >> r >> g >> b;
    int maxi = max({r, g, b});
    int sum = r + g + b;
    int max_pos = (sum + 1) / 2;
    if (maxi <= max_pos) {
      cout << "Yes" << endl;
    } else
      cout << "No" << endl;
  }

  return 0;
}