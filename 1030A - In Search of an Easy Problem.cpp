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

  int n;
  cin >> n;

  vector<int> arr(n);
  inputarr(arr, n);

  fo(i, n) {
    if (arr[i] == 1) {
      cout << "HARD" << endl;
      return 0;
    }
  }
  cout << "EASY" << endl;

  return 0;
}
