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

    // find gcd of all elements
    int g = v[0];
    for (int i = 1; i < n; i++) {
      g = __gcd(g, v[i]);
    }
    int maxi = *max_element(v.begin(), v.end());

    int cnt = maxi / g;
    cout << cnt << endl;
  }
  return 0;
}