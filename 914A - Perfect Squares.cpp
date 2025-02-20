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

  int n;
  cin >> n;
  vi(n);
  sort(v.begin(), v.end());
  int maxi = INT_MIN;
  for (int i = n - 1; i >= 0; i--) {
    // if it is not perfect square it is answer
    if (sqrt(v[i]) != (int)sqrt(v[i])) {
      cout << v[i] << endl;
      break;
    }
  }

  return 0;
}
