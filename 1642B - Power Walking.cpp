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
    // by some observation
    set<int> s;
    for (int x : v) {
      s.insert(x);
    }
    int cnt = s.size();
    for (int i = 1; i <= cnt; i++) {
      cout << cnt << " ";
    }
    for (int i = cnt; i < n; i++) {
      cout << ++cnt << " ";
    }
    cout << endl;
  }
  return 0;
}

// using map
/*
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
    map<int, int> mp;
    for (int x : v) {
      mp[x]++;
    }
    vector<int> ans;
    for (int k = 1; k <= n; k++) {
      if (k <= mp.size()) {
        ans.pb(mp.size());
      } else {
        int x = ans[ans.size() - 1];
        ans.pb(x + 1);
      }
    }
    for (int x : ans) {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}*/