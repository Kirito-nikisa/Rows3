#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int countWordOccurrences(const string& text, const string& word) {
    int count = 0;
    size_t pos = text.find(word);
    while (pos != string::npos) {
        ++count;
        pos = text.find(word, pos + word.length());
    }
    return count;
}

int main() {
    string text;
    string word;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the word: ";
    cin >> word;

    int occurrences = countWordOccurrences(text, word);
    cout << "The word '" << word << "' occurs " << occurrences << " times in the text." << endl;

    return 0;
}
