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
    int a, b, c;
    cin >> a >> b >> c;
    // logic we need to remove by pair

    if (b % 2 == c % 2)
      cout << 1 << " ";
    else
      cout << 0 << " ";
    if (a % 2 == c % 2)
      cout << 1 << " ";
    else
      cout << 0 << " ";
    if (a % 2 == b % 2)
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }

  return 0;
}
