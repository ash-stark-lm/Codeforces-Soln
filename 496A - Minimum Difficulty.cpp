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
  // compute by removing each element
  vector<int> gaps;
  for (int i = 1; i < n; i++) {
    gaps.pb(v[i] - v[i - 1]);
  }
  int initial_mx = *max_element(begin(gaps), end(gaps));
  int min_dif = INT_MAX;

  for (int i = 1; i < n - 1; i++) {
    int new_gap = v[i + 1] - v[i - 1];
    int mxi = max(new_gap, initial_mx);
    min_dif = min(min_dif, mxi);
  }
  cout << min_dif << endl;

  return 0;
}