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

  vi(n);

  // for corner elements
  int start = v[0];
  int end = v[n - 1];

  cout << v[1] - start << " " << end - start << endl;

  for (int i = 1; i < n - 1; i++) {
    cout << min(v[i] - v[i - 1], v[i + 1] - v[i]) << " "
         << max(v[i] - start, end - v[i]) << endl;
  }

  cout << end - v[n - 2] << " " << end - start << endl;
  return 0;
}