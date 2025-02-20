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
  string s;
  cin >> s;
  // friends->k
  // n ballons distribute to k friends so that he has either all abloons of diff
  // color or none at all
  bool possible = true;
  unordered_map<char, int> mp;
  for (auto x : s) {
    mp[x]++;
  }
  for (auto it : mp) {
    if (it.second > k) {
      possible = false;
      break;
    }
  }
  if (possible)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
