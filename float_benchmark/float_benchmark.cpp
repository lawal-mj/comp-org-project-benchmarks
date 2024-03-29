#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
        
    const int billion = 1e9;

    // Variables for operations
    double a = 1.5;
    double b = 2.5;
    double result;


        // Addition benchmark
    auto start = high_resolution_clock::now();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < billion; j++)
        {
            result = a + b;
        }
    }

        // multiplication benchmark
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < billion; j++)
            result = a * b;
    }

}