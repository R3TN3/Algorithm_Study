#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int main(void) {
    int num1, num2;
    cin >> num1 >> num2;
    
    cout << solution(num1, num2) << endl;
    
    return 0;
}