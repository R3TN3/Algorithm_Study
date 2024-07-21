#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    double total = 0, total_credit = 0;
    vector<string> grade_list = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
    vector<double> grade_average_credit_list = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
    
    for (int i = 0; i < 20; i++) {
        string name, grade;
        double credit;
        cin >> name >> credit >> grade;

        if (grade == "P")
            continue;

        int index = find(grade_list.begin(), grade_list.end(), grade) - grade_list.begin();
        total += credit * grade_average_credit_list[index];
        total_credit += credit;
    }

    cout << fixed;
    cout.precision(6);
    
    if (total_credit == 0)
        cout << total << "\n";
    else
        cout << total / total_credit << "\n";
    
    return 0;
}