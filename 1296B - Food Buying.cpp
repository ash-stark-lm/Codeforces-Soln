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

vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int s;
    cin >> s;

    int spent = 0;

    while (s >= 10) {
      int x = (s / 10) * 10; // Spend the largest multiple of 10
      spent += x;
      s = s - x + (x / 10); // Update s with cashback
    }

    spent += s; // Add remaining amount less than 10
    cout << spent << endl;
  }

  return 0;
}