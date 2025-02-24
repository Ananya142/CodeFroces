#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string word, result = "";

    for (int i = 0; i < n; i++) {
        cin >> word;
        int size = word.length();  
        
        if (size > 10) {
            result += word[0] + to_string(size-2) + word[size - 1] + "\n";  
        } else {
            result += word + "\n";
        }
    }

    cout << result;
    
    return 0;
}
