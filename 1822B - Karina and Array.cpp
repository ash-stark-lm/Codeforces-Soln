#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<ll> arr(n);
    inputarr(arr, n);
    sort(arr.begin(), arr.end());

    ll p1 = arr[0] * arr[1];
    ll p2 = arr[n - 1] * arr[n - 2];

    ll ans = max(p1, p2);
    cout << ans << endl;
  }
  return 0;
}