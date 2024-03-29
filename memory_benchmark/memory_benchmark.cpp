#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(){
        // create array
    const long long arraySize = 5000000000;

    // int is 4 bytes at a time  
    int* dataArray = new int[arraySize]; 
    int temp_data;

    auto start = high_resolution_clock::now();

        // reading data
    for (long long i = 0; i < arraySize; i++) {
        temp_data = dataArray[i];
    }

    // writing data
    for (long long i = 0; i < arraySize; i++) {
        dataArray[i] = 1;
    }


}