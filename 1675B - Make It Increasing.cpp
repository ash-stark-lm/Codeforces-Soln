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

    vector<int> arr(n);
    inputarr(arr, n);

    int ops = 0;
    int i;
    for (i = n - 2; i >= 0; i--) {
      if (arr[i + 1] == 0)
        break; // if the i+1 th element is 0 then array cant be strictly
               // increasing
      if (arr[i] >= arr[i + 1]) {
        while (arr[i] >= arr[i + 1]) {
          arr[i] /= 2;
          ops++;
        }
      }
    }
    if (i >= 0)
      cout << -1 << endl;
    else
      cout << ops << endl;
  }

  return 0;
}
