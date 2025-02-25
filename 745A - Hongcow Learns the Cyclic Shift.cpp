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

  string s;
  cin >> s;
  int n = s.length();
  unordered_map<string, int> mp;

  while (mp.find(s) == mp.end()) {

    mp[s] = 1;
    string k = "";
    k += s[n - 1];
    k += s.substr(0, n - 1);
    s = k;
  }
  cout << mp.size() << endl;
  return 0;
}