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

  int n, a, x, b, y;
  cin >> n >> a >> x >> b >> y;
  while (true) {
    if (a == b) { // They meet
      cout << "YES" << endl;
      return 0;
    }
    if (a == x || b == y) { // One of them reaches their stop
      break;
    }

    // Move Daniel forward
    if (a != x) {
      a++;
      if (a > n)
        a = 1; // Circular behavior
    }

    // Move Vlad backward
    if (b != y) {
      b--;
      if (b < 1)
        b = n; // Circular behavior
    }
  }

  cout << "NO" << endl;
  return 0;
}
