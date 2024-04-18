#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "Hello, how are you?";
    int wordCount = 0;
    
    for(int i = 0; i < sentence.length(); ++i) {
        // Check if the current character is not a space and the next character is a space or the end of the string
        if(sentence[i] != ' ' && (i + 1 == sentence.length() || sentence[i + 1] == ' ')) {
            ++wordCount;
        }
    }

    cout << wordCount << " word(s)" << endl;

    return 0;
}
