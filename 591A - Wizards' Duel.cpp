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

  int l, p, q;
  cin >> l >> p >> q;

  // let they meet at x from harry position so p/x=q/l-x=> x=p*l/p+q; they will
  // again meet at the same spot
  double a = (double)p * l / (p + q);
  cout << a << endl;
  return 0;
}
