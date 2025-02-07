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
    int n, k;
    cin >> n >> k;

    int ki = k - 1;
    int cnt = 0;
    while (n > 1) {
      cnt++;
      n -= (ki);
    }
    cout << cnt << endl;
    // alternate

    /*if (n == 1) {
      cout << 0 << endl;
      continue;
    }

    // in one move we can make at max k-1 ones before last move
    // e.g 7 3 -> 1 1 5-> 1 1 1 4 ->1 1 1 1 3->1 1 1 1 1 1 1
    int steps = 1; // First split
    n -= k;        // First step reduces n

    // Further breaking down with k-1 ones per step
    steps += (n + (k - 2)) / (k - 1); // Equivalent to ceiling(n / (k - 1))

    cout << steps << endl;*/
  }

  return 0;
}