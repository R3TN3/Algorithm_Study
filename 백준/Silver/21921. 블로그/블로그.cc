#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, x;
    cin >> n >> x;
    
    vector<int> people(n);
    for (int i = 0; i < n; i++)
        cin >> people[i];

    int max_people = 0;
    for (int i = 0; i < x; i++)
        max_people += people[i];

    int current_sum = max_people;
    int cnt = 1;

    for (int i = 1; i <= n-x; i++) {
        current_sum = current_sum - people[i-1] + people[i+x-1];

        if (current_sum > max_people) {
            max_people = current_sum;
            cnt = 1;
        }
        else if (current_sum == max_people)
            cnt++;
    }

    if (max_people != 0) {
        cout << max_people << "\n";
        cout << cnt << "\n";
    }
    else
        cout << "SAD" << "\n";

    return 0;
}