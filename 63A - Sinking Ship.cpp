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
  vector<pair<int, pair<int, string>>> crew; // (priority, (index, name))

  // Mapping status to priority
  string name, status;
  for (int i = 0; i < n; i++) {
    cin >> name >> status;
    int priority;

    if (status == "rat")
      priority = 1;
    else if (status == "woman" || status == "child")
      priority = 2;
    else if (status == "man")
      priority = 3;
    else if (status == "captain")
      priority = 4; // Captain
    else
      priority = 5; // Other

    crew.push_back({priority, {i, name}});
  }

  // Sort based on (priority, index)
  sort(crew.begin(), crew.end());

  // Output the names in the correct order
  for (const auto &member : crew) {
    cout << member.second.second << "\n"; // Print the name
  }

  return 0;
}

/*
brute aproach                                                              \
#include<bits / stdc++.h>
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
  vector<string> rats, wc, men, captain, v;
  for (int i = 0; i < n; i++) {
    string x, y;
    cin >> x >> y;
    if (y == "rat")
      rats.pb(x);
    else if (y == "woman" || y == "child")
      wc.pb(x);
    else if (y == "man")
      men.pb(x);
    else if (y == "captain")
      captain.pb(x);
    else
      v.pb(x);
  }
  for (auto x : rats) {
    cout << x << endl;
  }
  for (auto x : wc) {
    cout << x << endl;
  }
  for (auto x : men) {
    cout << x << endl;
  }
  for (auto x : captain) {
    cout << x << endl;
  }
  for (auto x : v) {
    cout << x << endl;
  }

  return 0;
}
*/