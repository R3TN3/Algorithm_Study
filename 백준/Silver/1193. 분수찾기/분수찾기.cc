#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int x;
    int line = 1;
    int numer, deno;
    cin >> x;

    while (x > line) {
        x -= line;
        line++;
    }

    if (line % 2 == 0) {
        numer = x;
        deno = line - x + 1;
    }
    else {
        numer = line - x + 1;
        deno = x;
    }

    cout << numer << "/" << deno << "\n";
    
    return 0;
}