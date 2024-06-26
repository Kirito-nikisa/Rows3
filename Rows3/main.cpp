#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> splitIntoSentences(const string& text) {
    vector<string> sentences;
    stringstream ss(text);
    string sentence;
    while (getline(ss, sentence, '.')) {
        if (!sentence.empty()) {
            sentence += ".";
            sentences.push_back(sentence);
        }
    }
    return sentences;
}

string reverseSentences(const string& text) {
    vector<string> sentences = splitIntoSentences(text);
    for (string& sentence : sentences) {
        reverse(sentence.begin(), sentence.end());
    }
    string reversedText;
    for (const string& sentence : sentences) {
        reversedText += sentence + " ";
    }
    return reversedText;
}

int main() {
    string text;

    cout << "Enter the text: ";
    getline(cin, text);

    string reversedText = reverseSentences(text);

    cout << "Text with reversed sentences: " << reversedText << endl;

    return 0;
}
