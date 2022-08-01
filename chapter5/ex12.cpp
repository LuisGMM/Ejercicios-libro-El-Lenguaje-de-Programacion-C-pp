
# include <iostream>


int n = 0;


void a(int *n){

    (*n)++;
}


int main() {

    std::cout << n << '\n';

    int *pn = &n;
    a(&n);

    std::cout << n << '\n';
