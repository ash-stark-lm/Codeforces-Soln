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

  int cnt = 0;
  int mini = *min_element(v.begin(), v.end());
  int maxi = *max_element(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    if (v[i] > mini && v[i] < maxi) {
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}