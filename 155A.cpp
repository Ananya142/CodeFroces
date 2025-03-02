#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    
    int amazingCount = 0;
    int minScore = scores[0], maxScore = scores[0];
    
    for (int i = 1; i < n; i++) {
        if (scores[i] > maxScore) {
            amazingCount++;
            maxScore = scores[i];
        } else if (scores[i] < minScore) {
            amazingCount++;
            minScore = scores[i];
        }
    }
    
    cout << amazingCount << endl;
    return 0;
}
