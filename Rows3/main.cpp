#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void countDigits(const char* text, int* digitCounts) {
    memset(digitCounts, 0, 10 * sizeof(int));
    for (int i = 0; text[i] != '\0'; ++i) {
        if (isdigit(text[i])) {
            digitCounts[text[i] - '0']++;
        }
    }
}

int main() {
    char text[1000];
    int digitCounts[10];

    cout << "Enter the text: ";
    cin.getline(text, 1000);

    countDigits(text, digitCounts);

    for (int i = 0; i < 10; ++i) {
        if (digitCounts[i] > 0) {
            cout << static_cast<char>('0' + i) << ": " << digitCounts[i] << endl;
        }
    }

    return 0;
}
