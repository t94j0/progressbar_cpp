#include <iostream>
#include <unistd.h>
#include "ProgressBar.hpp"

int main() {
        const unsigned int max = 4000;
        ProgressBar p ("Test");
        for (int i = 0; i < max; i++) {
                p.increment();
		std::cout << p;
                usleep(1000);
        }
        std::cout << "\n";
}
