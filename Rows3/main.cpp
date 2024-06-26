#include <iostream>
#include <string>
#include <regex>

using namespace std;

int countSentences(const string& text) {
    regex sentenceEnd("[.!?]");
    auto sentencesBegin = sregex_iterator(text.begin(), text.end(), sentenceEnd);
    auto sentencesEnd = sregex_iterator();
    return distance(sentencesBegin, sentencesEnd);
}

int main() {
    string text;

    cout << "Enter the text: ";
    getline(cin, text);

    int sentenceCount = countSentences(text);
    cout << "The text contains " << sentenceCount << " sentences." << endl;

    return 0;
}
