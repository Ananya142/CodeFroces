#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  
    long long n;
    int results[t];  

    for (int i = 0; i < t; i++) {
        cin >> n;
        results[i] = (n - 1) / 2;  
    }

    for (int i = 0; i < t; i++) {
        cout << results[i] << endl;  
    }

    return 0;
}
