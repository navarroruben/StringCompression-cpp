// Ruben Navarro
// 12/13/2019
// main.cpp
// CTCI - String Compression
// Performs basic string compression using the counts of repeated chars

#include <iostream>
#include <string>
#include <algorithm>
#include "prototypes.h"

int main() {

std::string s = "abacbb";
std::sort(s.begin(), s.end());

// checks if string is empty
if (checkIfEmpty(s)) {
    std::cout << "Error: String is empty!/n";
    return 0;
}

// counts the occurrences of a char in a string and compresses the char and frequency in another string
std::cout << "String: " << s << " is compressed into: " << countAndCompressString(s) << std::endl;
    return 0;
}