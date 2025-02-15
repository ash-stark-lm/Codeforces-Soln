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
    vector<int> p(3);
    for (int i = 0; i < 3; i++) {
      cin >> p[i];
    }
    sort(p.begin(), p.end());
    // logic if all 3 at diff position then bring a forward and c backward
    // but if any 2 have same position like if(a==b) then bring forward
    int a = p[0];
    int b = p[1];
    int c = p[2];

    cout << max((2 * (c - a - 2)), 0ll) << endl;
  }

  return 0;
}