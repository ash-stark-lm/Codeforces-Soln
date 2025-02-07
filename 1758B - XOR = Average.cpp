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
    if (n % 2 != 0) {
      for (int i = 0; i < n; i++) {
        cout << 1 << " ";
      }
      cout << endl;
    } else {
      // obervation we need numbers whose xor=average
      //  2 xor 6=4 and avg of 2 and 6 is 4
      cout << 2 << " " << 6 << " ";
      for (int i = 0; i < n - 2; i++) {
        cout << 4 << " ";
      }
      cout << endl;
    }
  }

  return 0;
}