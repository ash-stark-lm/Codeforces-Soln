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

    vi(n);
    int mini = 0;
    bool is_sorted = true;
    for (int i = 0; i < n - 1; i++) {
      if (v[i] > v[i + 1]) {
        is_sorted = false;
        break;
      }
    }
    if (is_sorted) {
      cout << 0 << endl;
      continue;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] == cnt + 1) {
        cnt++;
      }
    }
    int rem = n - cnt;
    // cout << ceil((double)rem / k) << endl;

    cout << (rem + k - 1) / k << endl;
  }

  return 0;
}