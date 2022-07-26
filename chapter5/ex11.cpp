
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

using namespace std;

vector<string> readInput() {

    string word;
    vector<string> words;

    while (true) {
        getline(cin, word);

        if (word == "Salir") break;

        // checking if word is in words
        if (find(words.begin(), words.end(), word) == words.end()) words.push_back(word);

        // Alternative way 
        // bool found = false;
        // for (short i = 0; i < words.size(); i++) if (words[i] == word) found = true;

        // if (!found) words.push_back(word);

    }

