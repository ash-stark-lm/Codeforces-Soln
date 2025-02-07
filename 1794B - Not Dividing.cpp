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
    int moves = 2 * n;
    // if a[i]%a[i-1]==0 then increase a[i] by 1
    //  first make all one 2 as they create problem as they divide everyone

    for (int i = 0; i < n; i++) {
      if (v[i] == 1) {
        v[i] += 1;
        moves--;
      }
    }

    for (int i = 1; i < n; i++) {
      if (v[i] % v[i - 1] == 0) {
        v[i] += 1;
        moves--; // at max n-1 operation
      }
    }

    for (int x : v) {
      cout << x << " ";
    }

    cout << endl;
  }

  return 0;
}