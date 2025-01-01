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

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    inputarr(arr, n);
    unordered_map<int, int> freq;
    for (int x : arr)
      freq[x]++;

    int unique = freq.size();
    int mf = 0;
    for (auto x : freq) {
      mf = max(mf, x.second);
    }

    int ans = max(min(unique - 1, mf), min(unique, mf - 1));
    cout << ans << endl;
  }

  return 0;
}
