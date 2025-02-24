#include <iostream>
using namespace std;

int main() {
    int n=2;
  

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        s[0] = toupper(s[0]);  
        cout << s << endl;
    }

    return 0;
}
