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

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int pw_2 = 0, pw_3 = 0;

    // Count factors of 2
    while (n % 2 == 0) {
      n /= 2;
      pw_2++;
    }

    // Count factors of 3
    while (n % 3 == 0) {
      n /= 3;
      pw_3++;
    }

    // If n is not 1, it has other prime factors
    if (n != 1 || pw_2 > pw_3) {
      cout << -1 << endl;
    } else {
      cout << pw_3 + (pw_3 - pw_2) << endl;
    }
  }
  return 0;
}
