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

  // 2016 is leap year
  // 7 months have 31 days 4 months have 30 days and 1 month has 29 days
  // 366 / 7 => 52 weeks and 2  extra days friday and saturday
  // if daays are 29 then 12 months if 30 then 11 else 7
  int x;
  string type, temp;
  cin >> x >> temp >> type; // Read input

  if (type == "week") {
    // Day of the week logic
    if (x == 5 || x == 6) // Friday or Saturday (extra occurrences)
      cout << 53 << endl;
    else
      cout << 52 << endl;
  } else {
    // Day of the month logic
    if (x <= 29)
      cout << 12 << endl;
    else if (x == 30)
      cout << 11 << endl;
    else // x == 31
      cout << 7 << endl;
  }
  return 0;
}