#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

const long long total_bytes = 1e9;
const int section_size = 10000;

int main(){
        ofstream outFile("sample.txt", ios::binary);

    char section[section_size];
    for (int i = 0; i < section_size; i++) {
    section[i] = 'x';
    }

}