#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll max1 = max(a, b);
    ll max2 = max(c, d);

    ll largest = max({a, b, c, d});
    ll sec_largest = 0;
    if (largest == a) {
      sec_largest = max({b, c, d});
    } else if (largest == b) {
      sec_largest = max({a, c, d});
    } else if (largest == c) {
      sec_largest = max({a, b, d});
    } else if (largest == d) {
      sec_largest = max({a, b, c});
    }

    if (largest == max1 && sec_largest == max2) {
      YES
    } else if (largest == max2 && sec_largest == max1) {
      YES
    } else {
      NO
    }
  }

  return 0;
}
