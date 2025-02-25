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
  unordered_map<int, int> mp;
  for (int x : v) {
    mp[x]++;
  }

  int mx = 0;
  for (auto x : mp) {
    if (x.second > mx) {
      mx = x.second;
    }
  }
  cout << n - mx << endl;

  return 0;
}