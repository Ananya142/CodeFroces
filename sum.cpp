#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    string output = "";
    
    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a) {
            output += "YES\n";
        } else {
            output += "NO\n";
        }
    }
    cout << output;

    return 0;
}
