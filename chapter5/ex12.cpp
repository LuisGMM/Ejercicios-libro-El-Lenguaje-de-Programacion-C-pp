
# include <iostream>


int n = 0;


void a(int *n){

    (*n)++;
}

class New {
    public:
        int arg1;
        int arg2;
        int* parg3 = new int{3};

int main() {

    std::cout << n << '\n';

    int *pn = &n;
    a(&n);

    std::cout << n << '\n';

    [&](){};

}