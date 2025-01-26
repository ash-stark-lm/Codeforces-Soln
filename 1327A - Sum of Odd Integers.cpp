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
    int n, k;
    cin >> n >>
        k; // sum of first k odd numbers 1,4,9,16... ->  for given k ->k*k

    if (n % 2 == 0) {
      if (k * k <= n && k % 2 == 0) {
        YES;

      } else if (k % 2 != 0 || k * k > n) {
        NO;
      }
    } else {
      if (k * k <= n && k % 2 != 0) {
        YES;

      } else if (k % 2 == 0 || k * k > n) {
        NO;
      }
    }
  }
  return 0;
}