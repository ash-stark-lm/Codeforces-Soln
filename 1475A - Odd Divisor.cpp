#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"

bool isPOwerOfTwo(ll n) { return (n & (n - 1)) == 0; }
int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    if (n % 2 != 0) {
      cout << "Yes" << endl;
    } else if (isPOwerOfTwo(n)) {
      cout << "No" << endl;
    } else
      cout << "YES" << endl;
  }

  return 0;
}
