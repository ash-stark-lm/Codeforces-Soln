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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    // _ _ _ _ if we wanna place at index 0 and number is n then max possiblwe
    // woulf ber n-1 inversion so from starting we woul like to put having min
    // inversion i.e a[i]-1 + b[i]-1 sum si min and proceed

    vector<vector<int>> p;
    for (int i = 0; i < n; i++) {
      p.pb({a[i] - 1 + b[i] - 1, a[i], b[i]});
    }
    sort(p.begin(), p.end());

    for (auto x : p) {
      cout << x[1] << " ";
    }
    cout << endl;

    for (auto x : p) {
      cout << x[2] << " ";
    }
    cout << endl;
  }

  return 0;
}