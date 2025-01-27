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
    int a, b, c;
    cin >> a >> b >> c;

    // if possible to make all equal in 3 cuts

    // sort a,b,c in asc order
    // obsv-> b and c should be multiple of a

    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    a = v[0];
    b = v[1];
    c = v[2];

    if (b % a != 0 || c % a != 0) {
      cout << "NO" << endl;
      continue;
    }
    if ((b / a - 1) + (c / a - 1) <= 3) {
      cout << "YES" << endl;
      continue;
    }
    NO;
  }
  return 0;
}