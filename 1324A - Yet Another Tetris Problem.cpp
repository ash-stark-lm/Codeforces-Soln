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

  while (2 * t--) {
    int n;
    cin >> n;
    vi(n);

    bool poss = true;

    // if all elements parity same then possible
    for (int i = 1; i < n; i++) {

      if (v[i] % 2 != v[0] % 2) {
        poss = false;
        break;
      }
    }
    cout << (poss ? "YES" : "NO") << endl;
  }
  return 0;
}