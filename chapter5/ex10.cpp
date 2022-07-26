
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
