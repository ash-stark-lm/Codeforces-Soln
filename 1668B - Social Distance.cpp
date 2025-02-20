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
    vi(n);
    if (n > m) {
      cout << "No" << endl;
      continue;
    }
    sort(v.begin(), v.end());
    int chairs_req = 0;
    for (int i = 0; i < n - 1; i++) {
      chairs_req += max(v[i], v[i + 1]);
    }
    chairs_req += max(v[0], v[n - 1]);
    chairs_req += n;
    if (chairs_req <= m)
      YES;
    else
      NO;
  }

  return 0;
}