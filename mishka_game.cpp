#include <iostream>
using namespace std;

int main() {
    int n, mishkaWins = 0, chrisWins = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int mi, ci;
        cin >> mi >> ci;
        if (mi > ci) {
            mishkaWins++;
        } else if (ci > mi) {
            chrisWins++;
        }
    }

    if (mishkaWins > chrisWins) {
        cout << "Mishka" << endl;
    } else if (chrisWins > mishkaWins) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
