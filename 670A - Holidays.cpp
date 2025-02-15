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

  int k = n / 7;
  int r = n % 7;

  // for max days off start day with saturday;
  int ans1 = k * 2;
  ans1 += min(r, 2ll);

  // for min days off start day with monday

  int ans2 = k * 2;
  if (r == 6)
    ans2 += 1;

  cout << ans2 << " " << ans1 << endl;
  return 0;
}
