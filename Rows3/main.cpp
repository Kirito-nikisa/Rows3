#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void capitalizeSentences(char* text) {
    bool capitalizeNext = true;
    for (int i = 0; text[i] != '\0'; ++i) {
        if (capitalizeNext && isalpha(text[i])) {
            text[i] = toupper(text[i]);
            capitalizeNext = false;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            capitalizeNext = true;
        }
    }
}

int main() {
    char text[1000];

    cout << "Enter the text: ";
    cin.getline(text, 1000);

    capitalizeSentences(text);
    cout << "Modified text: " << text << endl;

    return 0;
}
