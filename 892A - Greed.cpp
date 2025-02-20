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
  vector<int> a(n);
  vector<int> b(n);
  fo(i, n) cin >> a[i];
  fo(i, n) cin >> b[i];

  int sum = 0;
  fo(i, n) sum += a[i];
  sort(b.begin(), b.end());
  int r = b[n - 1] + b[n - 2];
  if (r >= sum)
    YES;
  else
    NO;

  return 0;
}
