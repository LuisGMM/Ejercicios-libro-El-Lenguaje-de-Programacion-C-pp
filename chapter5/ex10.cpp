
# include <iostream>
# include <string>

std::string months[] = {"January", "February", "March", "April", "May",
                 "June", "July", "August", "September", "October",
                 "November", "December"};


void looper(std::string array[]) {

    for (short i = 0; i < 12; i++) {
        std::cout << array[i] << std::endl;
    }
}

// void looper(std::string array[]) {

//     for (std::string* p = array; p != 0; p++) {
//         std::cout << *p << std::endl;
//     }
// }

int main() {

    looper(months);
}