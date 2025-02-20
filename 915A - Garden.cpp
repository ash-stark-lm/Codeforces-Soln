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
  vi(n);

  // find the max element in array that divides k;
  sort(v.begin(), v.end());
  int ans = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (k % v[i] == 0) {
      ans = v[i];
      break;
    }
  }

  cout << k / ans << endl;

  return 0;
}
