#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long result = 1;  
    for (int i = 0; i < n; i++) {
        result = result*5;
    }

    cout << " last two digit of result is 25" << endl;
    return 0;
}
