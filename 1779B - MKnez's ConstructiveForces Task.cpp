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
    int n;
    cin >> n;

    if (n == 3) {
      cout << "NO" << endl;
      continue;
    }
    if (n % 2 == 0) {
      cout << "YES" << endl;
      for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
          cout << 1 << " ";
        else
          cout << -1 << " ";
      }
      cout << endl;
    } else {
      cout << "YES" << endl;
      int pos = n / 2 - 1;
      int neg = -(n / 2);

      for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
          cout << pos << " ";
        else
          cout << neg << " ";
      }
      cout << endl;
    }
  }

  return 0;
}