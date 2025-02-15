#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int A, B, n;
    cin >> A >> B >> n;

    vector<int> attack(n), health(n);
    for (int i = 0; i < n; i++)
      cin >> attack[i];
    for (int i = 0; i < n; i++)
      cin >> health[i];

    int total_damage = 0;
    int max_monster_attack = 0;

    for (int i = 0; i < n; i++) {
      int hits_needed = (health[i] + A - 1) / A; // Rounds up
      total_damage += hits_needed * attack[i];   // Total damage hero will take
      max_monster_attack =
          max(max_monster_attack, attack[i]); // Track strongest attack
    }

    // If hero survives after all fights, or can at least deliver the last blow
    if (B - (total_damage - max_monster_attack) > 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}