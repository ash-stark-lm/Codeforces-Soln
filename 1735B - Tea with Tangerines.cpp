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

    int mini = *min_element(v.begin(), v.end());
    int maxi = 2 * mini - 1;

    int steps = 0;
    for (int i = 0; i < n; i++) {
      steps += (v[i] / maxi);
      if (v[i] % maxi == 0)
        steps--; // e.g 16 and min is 4 then we only need 3 cuts giving 4 parts
    }
    cout << steps << endl;
  }
  return 0;
}
