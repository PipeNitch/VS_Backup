#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    const int width = 70;
    const int flipsPerLine = 5;

    int i = 0, x = 0;
    srand(time(NULL));
    bool switches[width] = {0};
    const string ch = "1234567890qwertyuiopasdfghjkl"
                      "zxcvbnm,./;'[]!@#$%^&*()_=-+";
    const int l = ch.size();
    system("Color 0A");

    while (true) {
        for (i = 0; i < width; i += 2) {
            if (switches[i]) {
                cout << ch[rand() % l] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

        for (i = 0; i < flipsPerLine; ++i) {
            x = rand() % width;
            switches[x] = !switches[x];
        }

        cout << endl;
    }

    return 0;
}
