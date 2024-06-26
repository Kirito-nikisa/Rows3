#include <iostream>
#include <cstring>

using namespace std;

void replaceWord(char* text, const char* oldWord, const char* newWord) {
    char buffer[1000];
    char* pos = text;
    buffer[0] = '\0';

    while ((pos = strstr(pos, oldWord)) != nullptr) {
        strncat(buffer, text, pos - text);
        strcat(buffer, newWord);
        pos += strlen(oldWord);
        text = pos;
    }
    strcat(buffer, text);
    strcpy(text, buffer);
}

int main() {
    char text[1000];
    char oldWord[100], newWord[100];

    cout << "Enter the text: ";
    cin.getline(text, 1000);

    cout << "Enter the word to replace: ";
    cin >> oldWord;

    cout << "Enter the new word: ";
    cin >> newWord;

    replaceWord(text, oldWord, newWord);
    cout << "Modified text: " << text << endl;

    return 0;
}
