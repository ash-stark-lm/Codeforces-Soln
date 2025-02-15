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

  int n;
  cin >> n;
  vi(n);

  int mx_len = 0;
  int prev_cnt = 0, cur_cnt = 1;

  for (int i = 1; i < n; i++) {
    if (v[i] == v[i - 1]) {
      cur_cnt++;
    } else {
      mx_len = max(mx_len, 2 * min(prev_cnt, cur_cnt));
      prev_cnt = cur_cnt;
      cur_cnt = 1;
    }
  }
  mx_len = max(mx_len, 2 * min(prev_cnt, cur_cnt));
  cout << mx_len << endl;

  return 0;
}
