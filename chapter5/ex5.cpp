# include <iostream>
# include <string>

using namespace std;


int main(){

    char str[] = "Una cadena corta";
    cout << sizeof(str) << endl;
    cout <<  sizeof(str)/sizeof(str[0]); // Hay que tener en cuenta que un string acaba siempre en 0
}