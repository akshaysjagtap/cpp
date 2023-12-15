/*
In this example, std::random_device is used to seed the std::mt19937 engine. The std::mt19937 engine is then used to generate random numbers within a specified range using std::uniform_int_distribution.
*/

#include <iostream>
#include <random>

int main() {
    // Use std::random_device to seed a pseudo-random number generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Generate a random integer between 1 and 100
    std::uniform_int_distribution<int> distribution(1, 100);
    int random_number = distribution(gen);

    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}
