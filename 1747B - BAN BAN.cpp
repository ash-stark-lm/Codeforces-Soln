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

    // if n is even
    if (n % 2 == 0) {
      cout << n / 2 << endl;
    } else
      cout << n / 2 + 1 << endl;
    int i = 1, j = 3 * n;
    while (i < j) {
      cout << i << " " << j << endl;
      i += 3;
      j -= 3;
    }
  }
  return 0;
}