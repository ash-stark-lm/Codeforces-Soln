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
  string s, t;
  cin >> s >> t;

  int h1 = stoi(s.substr(0, 2)), m1 = stoi(s.substr(3, 2));
  int h2 = stoi(t.substr(0, 2)), m2 = stoi(t.substr(3, 2));

  int mins = (h1 * 60 + m1) - (h2 * 60 + m2);
  if (mins < 0)
    mins += 1440; // Handle previous day case

  cout << (mins / 60 < 10 ? "0" : "") << mins / 60 << ":"
       << (mins % 60 < 10 ? "0" : "") << mins % 60 << endl;
  return 0;
}