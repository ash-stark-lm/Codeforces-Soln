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

    // if there is peak then only possible
    bool pos = false;
    for (int i = 1; i < n - 1; i++) {
      if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
        cout << "YES" << endl;
        cout << i << " " << i + 1 << " " << i + 2 << endl; // 1 based indexing
        pos = true;
        break;
      }
    }
    if (!pos)
      cout << "NO" << endl;
  }

  return 0;
}