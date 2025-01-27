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

    // using 6,8,10 we can create any even number after it
    // 6 slice -> 15 min and 8 -> 20 and 10-> 25 => so 2 slice -> 5 min
    // if n is odd we need to order n+1 slice
    int ans = max(15LL, (n + 1) / 2 * 5);
    cout << ans << endl;
  }

  return 0;
}