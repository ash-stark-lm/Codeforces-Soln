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
    int l, r, a;
    cin >> l >> r >> a;

    int q1 = l / a;
    int q2 = r / a;
    if (q1 == q2) {
      cout << q2 + r % a << endl;
    }

    else {
      cout << max(r / a + r % a, r / a - 1 + a - 1) << endl;
    }
  }

  return 0;
}