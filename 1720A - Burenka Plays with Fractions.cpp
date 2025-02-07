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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int prod1 = a * d;
    int prod2 = b * c;

    if (prod1 == prod2) {
      cout << 0 << endl;

    } else if ((a == 0 || c == 0)) {
      cout << 1 << endl;
    } else if (prod1 % prod2 == 0 || prod2 % prod1 == 0) {
      cout << 1 << endl;
    } else
      cout << 2 << endl;
  }

  return 0;
}