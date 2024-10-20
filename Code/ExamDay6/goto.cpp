#include <iostream>
using namespace std;

int main() {
    int x = 1;
    
    if (x == 1) {
        goto my_label;  // Jump to label "my_label"
    }

x:
    cout << "This will be skipped." << endl;

my_label:
    cout << "Jumped to label 'my_label'!" << endl;

    goto x;

    return 0;
}
