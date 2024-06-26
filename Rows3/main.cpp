#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string text;

    cout << "Enter the text: ";
    getline(cin, text);

    reverse(text.begin(), text.end());

    cout << "Reversed text: " << text << endl;

    return 0;
}
