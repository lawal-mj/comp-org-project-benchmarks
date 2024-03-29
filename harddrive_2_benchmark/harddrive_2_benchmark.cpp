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

        // calculate writing time 
    auto start_write = high_resolution_clock::now();
    for (long long i = 0; i < total_bytes; i += section_size) {
        outFile.write(section, section_size);
    }
    auto end_write = high_resolution_clock::now();
    auto WRITING_TIME = duration_cast<milliseconds>(end_write - start_write).count();
    // finish getting writing time 

        outFile.close();

    // open the file 
    ifstream inFile("sample.txt", ios::binary);

    auto start_read = high_resolution_clock::now();
    for (long long i = 0; i < total_bytes; i += section_size) {
        inFile.read(section, section_size);
    }
    auto end_read = high_resolution_clock::now();
        inFile.close();

    auto READING_TIME = duration_cast<milliseconds>(end_read - start_read).count();


    cout << "Time: " << (READING_TIME + WRITING_TIME) << "ms" << endl;
    



}