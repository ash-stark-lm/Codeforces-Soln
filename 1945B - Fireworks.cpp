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
    int a, b, m;
    cin >> a >> b >> m;
    // find common time when a and b will be launching that is lcm and then lok
    // for m seconds

    int lcm = (a * b) / __gcd(a, b);
    int ans = m / a + 1 + m / b + 1; // +1 because include 0th time also
    cout << ans << endl;
  }
  return 0;
}