#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k; // input number of creatures, number of habitat preferences and number of census teams available

    vector < pair < int, int > > creatures(n);
    vector < int > habitats_max(m, 0); // initialize 0 as the maximum danger level in each habitat preference

    for (int i = 0; i < n; i++) {
        cin >> creatures[i].first >> creatures[i].second; // store each creature danger level and habitat preference
    }

    for (int i = 0; i < n; i++) {
        habitats_max[creatures[i].second - 1] = max(habitats_max[creatures[i].second - 1], creatures[i].first); // update max danger level in each habitat preference
    }

    sort(habitats_max.begin(), habitats_max.end()); // sort the max danger level in each habitat

    int minimalized_sum = 0; // initialize total minimalized sum as 0
    for (int i = 0; i < k - 1; ++i) {
        minimalized_sum += habitats_max[i]; // allocate k - 1 teams to the k - 1 minimum danger level creatures from the start
    }
	minimalized_sum += habitats_max[m - 1]; // allocate the rest of the creatures to the last team whose maximum is the maximum danger level creature
    cout << minimalized_sum << endl; // output the total minimalized sum

    return 0;
}
