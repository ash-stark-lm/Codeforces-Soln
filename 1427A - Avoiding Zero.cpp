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
    vi(n);
    sort(v.begin(), v.end());
    int neg_sum = 0, pos_sum = 0;
    for (int x : v) {
      if (x < 0)
        neg_sum += x;
      else
        pos_sum += x;
    }
    sort(v.begin(), v.end());

    if (abs(neg_sum) == pos_sum) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      if (abs(neg_sum) > pos_sum) {
        for (int x : v) {
          cout << x << " ";
        }
        cout << endl;
      } else {
        for (int i = n - 1; i >= 0; i--) {
          cout << v[i] << " ";
        }
        cout << endl;
      }
    }
  }
  return 0;
}
