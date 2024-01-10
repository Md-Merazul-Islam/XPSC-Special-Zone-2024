

#include <bits/stdc++.h>
using namespace std;
#define ll long long

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    vector<int> groups(n);
    for (int i = 0; i < n; ++i) {
        cin >> groups[i];
    }

    sort(groups.rbegin(), groups.rend());

    int maxCouncils = 0;
    for (int i = 0; i < n; ++i) {
        int availableSeats = k;
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (groups[j] >= k && availableSeats > 0) {
                int studentsTaken = min(groups[j] / k, availableSeats);
                count += studentsTaken;
                availableSeats -= studentsTaken;
            }
        }
        maxCouncils = max(maxCouncils, count);
    }

    cout << maxCouncils << endl;

    return 0;
}
