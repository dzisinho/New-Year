#include <iostream>
using namespace std;

void drawTree(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < height - 1; i++) {
        cout << " ";
    }
    cout << "|" << endl;
}

int main() {
    int height;
    cout << "Enter the height of the tree: ";
    cin >> height;

    drawTree(height);

    cout << "Happy New Year and Merry Christmas!" << endl;

    return 0;
}
