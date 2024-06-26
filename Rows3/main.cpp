#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string text;

    cout << "Enter the text: ";
    getline(cin, text);

    int dotCount = count(text.begin(), text.end(), '.');
    int commaCount = count(text.begin(), text.end(), ',');

    cout << "The text contains " << dotCount << " dots and " << commaCount << " commas." << endl;

    return 0;
}
