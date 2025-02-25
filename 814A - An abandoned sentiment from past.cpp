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

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(k);
  fo(i, n) cin >> a[i];
  fo(i, k) cin >> b[i];
  // see if we will have continuos zero then there willalways be a chance to
  // make non increasing else need to check

  bool contZeros = false;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] == 0 && a[i + 1] == 0) {
      contZeros = true;
      break;
    }
  }
  if (contZeros) {
    YES;
    return 0;
  }
  sort(b.begin(), b.end());
  bool possible = true;
  int j = k - 1;
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      a[i] = b[j];
      j--;
    }
  }
  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) {
      possible = false;
      break;
    }
  }
  if (possible) {
    NO;
  } else
    YES;

  return 0;
}