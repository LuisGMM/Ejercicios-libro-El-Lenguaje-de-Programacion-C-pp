# include <iostream>
# include <string>

using std::string;
using std::cout;

string abecedario = "abcdefghijklmnopqrstuvwxyz";


int main() {
    for (char c: abecedario) cout << c << "\n";

    for (short i=0; i<=9; i++) cout << i << "\n";
}
