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

  int a, b;
  cin >> a >> b;
  if (a == 9 && b == 1) {
    cout << 9 << " " << 10 << endl;
  } else if (b - a > 1 || a > b) {
    cout << -1 << endl;
  } else {
    if (a == b) {
      cout << a * 10 << " " << b * 10 + 1 << endl;
    } else {
      cout << a * 10 + 9 << " " << b * 10 << endl;
    }
  }

  return 0;
}