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

  vector<pair<int, int>> v(n);
  // check krle if next day  jab tak ka price cheaper h then aaj hee buy krle
  for (int i = 0; i < n; i++) {
    cin >> v[i].first;
    cin >> v[i].second;
  }

  int curr_min_price = INT_MAX;
  int total_price = 0;
  for (int i = 0; i < n; i++) {
    curr_min_price = min(curr_min_price, v[i].second);
    total_price = total_price + curr_min_price * v[i].first;
  }
  cout << total_price << endl;

  return 0;
}