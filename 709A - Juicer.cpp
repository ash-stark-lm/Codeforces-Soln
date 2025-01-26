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

  int n, b, d;
  cin >> n >> b >> d;

  vi(n);
  int cnt = 0;
  int capacity = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] <= b) {
      capacity += v[i];
    }
    if (capacity > d) {
      cnt++;
      capacity = 0;
    }
  }
  cout << cnt << endl;

  return 0;
}