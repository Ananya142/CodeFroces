#include <iostream>
using namespace std;

int main() {
    int w1, w2;
    cin >> w1 >> w2;
    
    int i = 0;
    
    while (w1 <= w2) {  
        w1 *= 3;  
        w2 *= 2;  
        i++;  
    }

    cout << i << endl;  
    return 0;
}
