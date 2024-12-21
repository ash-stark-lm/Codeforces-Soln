#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {
  vector<int> pre_compute(1e5 + 5, 0);

  pre_compute[1] = 1;
  ll x = 1, j = 2;

  for (int i = 2; i <= 1e5; i++) {
    x = 2 * x + 2;
    while (j <= x && j <= 1e5) {
      pre_compute[j] = i;
      j++;
    }

    if (x > 1e5)
      break;
  }
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    cout << pre_compute[n] << endl;
  }
  return 0;
}