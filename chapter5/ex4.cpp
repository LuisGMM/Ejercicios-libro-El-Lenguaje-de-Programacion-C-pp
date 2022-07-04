# include <iostream>


void exchange(int* n1, int* n2){

    int n3 = *n1;
    *n1 = *n2;
    *n2 = n3;
}

int main() {



int a = 1;
int b = 2;

exchange(&a, &b);

std::cout << a << " " << b << std::endl;
}


