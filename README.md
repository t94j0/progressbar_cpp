# ProgressBar

I'm trying to learn how to use C++ better, so I'm rewriting some of my Go tools in C++.

[Here](https://github.com/t94j0/progress) is the Go version of the project.

# Usage

1. Create a progress bar object
	* Choose a bar with or without a maximum
		```c++
		// No maximum
		ProgressBar p(std::cout, "Test")`
		```
		
		```c++
		// Maximum of 400
		ProgressBar p(std::cout, "Test", 400)`
		```
2. Increment the progress bar
	```c++
	p.increment();
	```

# Example

```c++
#include <iostream>
#include <unistd.h>
#include "ProgressBar.cpp"

int main() {
        const unsigned int max = 4000;
        ProgressBar p (std::cout, "Test");
        for (int i = 0; i < max; i++) {
                p.increment();
                usleep(1000);
        }
        std::cout << "\n";
}
```
