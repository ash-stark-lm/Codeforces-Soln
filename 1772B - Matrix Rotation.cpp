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

bool is_beautiful(int a, int b, int c, int d) {
  if (a < b && c < d && a < c && b < d)
    return true;
  return false;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool possible = false;
    for (int i = 0; i < 4; i++) {
      if (is_beautiful(a, b, c, d)) {
        possible = true;
        break;
      }
      // Rotate the matrix clockwise
      int temp = a;
      a = c;
      c = d;
      d = b;
      b = temp;
    }
    if (!possible)
      NO;
    else
      YES;
  }

  return 0;
}