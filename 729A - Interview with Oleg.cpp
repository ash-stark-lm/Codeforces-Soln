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
  string s;
  cin >> n >> s;

  string result;
  int i = 0;

  while (i < n) {
    if (i + 2 < n && s[i] == 'o' && s[i + 1] == 'g' && s[i + 2] == 'o') {
      result += "***"; // Replace the filler
      i += 3;          // Move past "ogo"

      // Extend while "go" pattern continues
      while (i + 1 < n && s[i] == 'g' && s[i + 1] == 'o') {
        i += 2;
      }
    } else {
      result += s[i]; // Add normal characters
      i++;
    }
  }

  cout << result << endl;
  return 0;
}