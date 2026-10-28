#include <iostream>
#include <queue>
using namespace std;

int main() {
    system("cls");
    queue<float> antrean;
    float input;

    while(cin >> input) {
        antrean.push(input);
    }

    do {
        cout << antrean.front() << " ";
        antrean.pop();
    } while (antrean.size() != 0);

    cout << endl;
    system("pause");

    return 0;
}
