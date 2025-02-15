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
  vector<int> odd, even;
  for (int x : v) {
    if (x & 1)
      odd.pb(x);
    else
      even.pb(x);
  }

  sort(odd.begin(), odd.end());
  sort(even.begin(), even.end());
  int o = odd.size();
  int e = even.size();
  int mini = min(o, e);
  int i = o, j = e;
  i -= mini;
  j -= mini;
  if (i > 0)
    i--;
  if (j > 0)
    j--;
  int ans = 0;
  while (i > 0) {
    ans += odd[i - 1];
    i--;
  }
  while (j > 0) {
    ans += even[j - 1];
    j--;
  }
  cout << ans << endl;

  return 0;
}
