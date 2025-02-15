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

void find_apartments(int n) {
  // Try all possible values of 3-room apartments (x)
  for (int x = 0; x <= n / 3; x++) {
    // Try all possible values of 5-room apartments (y)
    for (int y = 0; y <= n / 5; y++) {
      // Calculate the remaining windows for 7-room apartments (z)
      int remaining = n - (3 * x + 5 * y);
      if (remaining >= 0 && remaining % 7 == 0) {
        int z = remaining / 7;
        cout << x << " " << y << " " << z << endl;
        return;
      }
    }
  }
  cout << -1 << endl;
}
signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    find_apartments(n);
  }

  return 0;
}