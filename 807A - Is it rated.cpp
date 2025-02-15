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
  vector<pair<int, int>> v((size_t)n);

  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }

  for (int i = 0; i < n; i++) {
    if (v[i].first != v[i].second) {
      cout << "rated" << endl;
      return 0;
    }
  }
  for (int i = 0; i < n - 1; i++) {
    if (v[i].first < v[i + 1].first) {
      cout << "unrated" << endl;
      return 0;
    }
  }
  cout << "maybe" << endl;

  return 0;
}