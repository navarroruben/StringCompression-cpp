// Ruben Navarro
// 12/13/2019
// main.cpp
// CTCI - String Compression
// Performs basic non spaced string compression using the counts of repeated chars

#include <iostream>
#include <string>
#include "prototypes.h"

int main() {

std::string s = "aabcccccaaa";
std::string s2;

// checks if string is empty
if (checkIfEmpty(s)) {
    std::cout << "Error: String is empty!/n";
    return 0;
}
// counts the occurrences of a char in a string and compresses the char and frequency in another string
    s2 = countAndCompressString(s);
if (s2 < s)
    std::cout << "Original string: " << s << " compresses into: " << s2 << std::endl;
else
    std::cout << "Original string: " << s << " will not be compressed." << std::endl;

    return 0;
}