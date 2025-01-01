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

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    inputarr(a, n);

    int ind = 0;
    bool flag = false;
    for (int i = 1; i < n - 1; i++) {
      // for middle elements

      if (a[i] != a[i - 1] && a[i] != a[i + 1]) {
        ind = i;
        flag = true;
        break;
      }
    }
    // for end elements
    if (!flag) {
      if (a[0] != a[1]) {
        ind = 0;
      } else {
        ind = n - 1;
      }
    }
    cout << ind + 1 << endl;
  }
  return 0;
}
