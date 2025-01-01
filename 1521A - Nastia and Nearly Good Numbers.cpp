#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--) {
    ll a, b;
    cin >> a >> b;

    if (b == 1) {
      cout << "NO" << endl;
    } else if (b == 2) {
      cout << "YES" << endl;
      cout << a << " " << a * 2 << " " << a * 3 << endl;

    } else {
      cout << "YES" << endl;
      cout << a << " " << a * (b - 1) << " " << a * b << endl;
    }
  }

  return 0;
}
