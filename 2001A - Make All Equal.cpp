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
#define vi(n) vector<int> v(n);

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi(n);
    inputarr(v, n);
    unordered_map<int, int> mp;

    for (auto c : v) {
      mp[c]++;
    }
    int largest_freq = 0;
    for (auto x : mp) {
      largest_freq = max(largest_freq, x.second);
    }

    cout << n - largest_freq << endl;
  }

  return 0;
}
