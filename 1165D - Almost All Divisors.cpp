#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<ll> arr(n);
    inputarr(arr, n);
    sort(arr.begin(), arr.end());

    ll prod = arr[0] * arr[n - 1];

    vector<ll> factors;
    for (ll i = 2; i * i <= prod; i++) {
      if (prod % i == 0) {
        factors.push_back(i);
        if (i != prod / i)
          factors.push_back(prod / i);
      }
    }

    bool valid = true;
    sort(factors.begin(), factors.end());
    cout << (arr == factors ? prod : -1) << endl;
  }

  return 0;
}
