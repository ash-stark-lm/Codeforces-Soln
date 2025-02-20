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

  int b, k;
  cin >> b >> k;

  vector<int> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }
  // if b is even the answer depends on ak
  if (b % 2 == 0) {
    if (a[k - 1] % 2 == 0) {
      cout << "even" << endl;
    } else {
      cout << "odd" << endl;
    }
  }
  // if b is odd the parity of each term a_i * b^(k-i) depends on the parity of
  // a_i (since b is odd, b^(k-i) is also odd).
  else {
    int total = 0;
    for (int x : a) {
      total += x;
    }
    if (total % 2 == 0) {
      cout << "even" << endl;
    } else {
      cout << "odd" << endl;
    }
  }

  return 0;
}
