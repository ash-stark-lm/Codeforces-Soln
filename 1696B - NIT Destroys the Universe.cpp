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
    // if all zero then 0 step required
    // if coninuos segment of non zer and only one then one step
    // else 2 step selct entirely set it to some integer x then select againall
    // make it zero

    bool all_zeros = true;
    for (int x : v) {
      if (x != 0) {
        all_zeros = false;
        break;
      }
    }

    if (all_zeros) {
      cout << 0 << endl;
      continue;
    }
    int cnt_non_zero_segment = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] != 0) {
        cnt_non_zero_segment++;
        while (i < n && v[i] != 0) {
          i++;
        }
      }
    }
    if (cnt_non_zero_segment == 1)
      cout << 1 << endl;
    else
      cout << 2 << endl;
  }

  return 0;
}