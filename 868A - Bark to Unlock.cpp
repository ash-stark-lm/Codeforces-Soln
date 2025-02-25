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

  string password;
  int n;
  cin >> password >> n;

  bool first_found = false, second_found = false;
  vector<string> words(n);

  for (int i = 0; i < n; i++) {
    cin >> words[i];

    if (words[i] == password) {
      cout << "YES" << endl;
      return 0;
    }

    if (words[i][1] == password[0])
      first_found = true;
    if (words[i][0] == password[1])
      second_found = true;
  }

  if (first_found && second_found) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}