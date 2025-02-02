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
    int x1, p1;
    cin >> x1 >> p1;
    int x2, p2;
    cin >> x2 >> p2;

    int total_digit_1 = to_string(x1).length() + p1;
    int total_digit_2 = to_string(x2).length() + p2;

    // If total digits differ, we can directly compare
    if (total_digit_1 > total_digit_2) {
      cout << ">\n";
      continue;
    }
    if (total_digit_1 < total_digit_2) {
      cout << "<\n";
      continue;
    }

    // If both numbers have the same total digit length, compare them as strings
    string s1 = to_string(x1);
    string s2 = to_string(x2);

    // Append zeros to the shorter number to make both of equal length
    while (s1.length() < s2.length())
      s1 += '0';
    while (s2.length() < s1.length())
      s2 += '0';

    // Compare the strings lexicographically
    if (s1 > s2)
      cout << ">\n";
    else if (s1 < s2)
      cout << "<\n";
    else
      cout << "=\n";
  }

  return 0;
}