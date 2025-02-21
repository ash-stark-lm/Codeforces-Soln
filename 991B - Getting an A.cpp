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
  sort(v.begin(), v.end());

  int sum = 0;

  for (int x : v) {
    sum += x;
  }
  // round sum/n to nearest integer
  int cur_avg = (sum + n / 2) / n;
  if (cur_avg == 5) {
    cout << 0 << endl;
    return 0;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (cur_avg == 5) {
      cout << ans << endl;
      return 0;
    }
    sum += 5 - v[i];
    ans++;
    cur_avg = (sum + n / 2) / n;
  }
  if (cur_avg == 5) {
    cout << ans << endl;
  }

  return 0;
}
