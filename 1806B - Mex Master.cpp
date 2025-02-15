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
    vi(n);
    int zeros = 0;
    int one = 0;
    bool greater = false;
    for (int i = 0; i < n; i++) {
      if (v[i] == 0)
        zeros++;
      else if (v[i] == 1)
        one = 1;
      else if (v[i] >= 2)
        greater = true;
    }
    int not0 = n - zeros;
    if (zeros > not0 + 1) {
      if (one == 0) {
        cout << 1 << endl;
      } else {
        if (greater) {
          cout << 1 << endl;
        } else {
          cout << 2 << endl;
        }
      }
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}
