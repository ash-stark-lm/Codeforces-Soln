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
    cin >> n >> k;
    int steps = 0;
    while (n > 0) {
      if (n % k == 0) {
        n /= k;
        steps++;
      } else {
        int m = n % k; // How much we need to subtract to make it divisible
        if (m == 0)
          m = k; // If already divisible, directly divide
        n -= m;
        steps += m;
      }
    }

    cout << steps << endl;
  }
  return 0;
}
