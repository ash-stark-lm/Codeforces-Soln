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
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int first_odd = -1;
  int cnt_odd = 0;
  int max_sum = 0;

  for (int x : v) {
    max_sum += x;
    if (x % 2 == 1) {
      cnt_odd++;
      if (first_odd == -1)
        first_odd = x;
    }
  }
  if (first_odd != -1 && cnt_odd % 2 == 1) {
    max_sum -= first_odd;
  }
  cout << max_sum << endl;

  return 0;
}
