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
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vi(n);

    bool possible = true;

    for (int i = 0; i < n; i++) {

      if (i == 0) {
        int initial_cost = min(v[i] * a, b);
        if (initial_cost > f) {
          possible = false;
          break;
        }
        f -= initial_cost;

      } else {
        // Time difference between two consecutive messages
        int delta_t = v[i] - v[i - 1];
        // Check cost to keep the phone on
        int cost_on = delta_t * a;
        // Check cost to turn off and on
        int cost_off_on = b;

        // Decide the cheaper option
        if (cost_on <= cost_off_on) {
          f -= cost_on; // Deduct cost for keeping the phone on
        } else {
          f -= cost_off_on; // Deduct cost for turning off and on
        }
      }

      // Check if the phone still has charge
      if (f <= 0) {
        possible = false;
        break;
      }
    }

    if (possible)
      YES;
    else
      NO;
  }

  return 0;
}