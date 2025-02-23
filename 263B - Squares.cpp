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
  sort(v.begin(), v.end());
  int m = n - k;
  if (m < 0) {
    cout << -1 << endl;
    return 0;
  }
  int a = v[m];
  cout << a << " " << a << endl;

  return 0;
}