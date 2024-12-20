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

    ll sum1 = 0, sum2 = 0;

    fo(i, n) {
      if (arr[i] >= 0)
        sum1 += arr[i];
      else
        sum2 += arr[i];
    }

    cout << abs(abs(sum1) - abs(sum2)) << endl;
  }
  return 0;
}