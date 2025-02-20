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
    int n, m;
    cin >> n >> m;
    // if only 1 cell then it is the hidden cell
    if (n == 1 && m == 1)
      cout << 0 << endl;
    // if this case take a boundary cell
    else if (n == 1 || m == 1)
      cout << 1 << endl;
    // in this case take a corner boundary cell then calculate distance every
    // one will be on its diagonal choose one diagonal of boundary
    else
      cout << 2 << endl;
  }

  return 0;
}