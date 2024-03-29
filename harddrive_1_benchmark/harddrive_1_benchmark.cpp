#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

const long long total_bytes = 1e9;
const int section_size = 100;
int main(){
    ofstream outFile("sample.txt", ios::binary);

    char section[section_size];
    for (int i = 0; i < section_size; i++) {
        section[i] = 'x';
    }

        // calculate writing time 
    auto start_write = high_resolution_clock::now();
    for (long long i = 0; i < total_bytes; i += section_size) {
        outFile.write(section, section_size);
    }


}