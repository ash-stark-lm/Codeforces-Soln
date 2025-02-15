#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // logic if n is odd then raze plays last and if n is even then breach plays
    // last
    bool hasOddAtOdd = false;   // Odd digit at an odd position (1-based)
    bool hasEvenAtEven = false; // Even digit at an even position (1-based)

    for (int i = 0; i < n; i++) {
      int digit = s[i] - '0';
      if ((i + 1) % 2 == 1 && digit % 2 == 1) { // Odd digit at odd position
        hasOddAtOdd = true;
      }
      if ((i + 1) % 2 == 0 && digit % 2 == 0) { // Even digit at even position
        hasEvenAtEven = true;
      }
    }

    if (n % 2 == 1) { // Raze plays last
      cout << (hasOddAtOdd ? 1 : 2) << endl;
    } else { // Breach plays last
      cout << (hasEvenAtEven ? 2 : 1) << endl;
    }
  }

  return 0;
}
