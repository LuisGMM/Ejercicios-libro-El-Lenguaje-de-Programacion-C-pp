# include <iostream>

using std::cout;

int main(){
    cout << sizeof(int) << sizeof(char) << "\n";
    cout << sizeof(double) << sizeof(bool) << "\n";
    cout << sizeof(long double) << "\n";
    cout << sizeof(int*) << sizeof(char*) << "\n";
    cout << sizeof(double*) << sizeof(bool*) << "\n";
    cout << sizeof(long double*) << "\n";
}
