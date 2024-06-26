#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void countLetters(const char* text, int* letterCounts) {
    memset(letterCounts, 0, 26 * sizeof(int));
    for (int i = 0; text[i] != '\0'; ++i) {
        if (isalpha(text[i])) {
            letterCounts[tolower(text[i]) - 'a']++;
        }
    }
}

int main() {
    char text[1000];
    int letterCounts[26];

    cout << "Enter the text: ";
    cin.getline(text, 1000);

    countLetters(text, letterCounts);

    for (int i = 0; i < 26; ++i) {
        if (letterCounts[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << letterCounts[i] << endl;
        }
    }

    return 0;
}
