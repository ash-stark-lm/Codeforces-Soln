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

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vi(n);

    unordered_map<int, int> mp;

    // if any thing has odd occurence then alice win else lose
    // e.g 1 2 4 4 alice chose 2 and bob chose 4 so alice win
    for (int x : v) {
      mp[x]++;
    }
    bool alice = false;
    for (auto i : mp) {
      if (i.second % 2 == 1) {
        alice = true;
        break;
      }
    }
    cout << (alice ? "YES" : "NO") << endl;
  }
  return 0;
}