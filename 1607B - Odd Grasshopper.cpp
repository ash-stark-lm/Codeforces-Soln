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
    int x, n;
    cin >> x >> n;

    int d;
    if (n % 4 == 0)
      d = 0;
    else if (n % 4 == 1)
      d = -n;
    else if (n % 4 == 2)
      d = 1;
    else
      d = n + 1;

    if (x % 2 == 0)
      cout << x + d << endl;
    else
      cout << x - d << endl;
  }

  return 0;
}