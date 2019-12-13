// Ruben Navarro
// 12/13/2019
// main.cpp
// CTCI - String Compression
// Performs basic string compression using the counts of repeated chars

#include <string>
#include <algorithm>

// checks if string is empty
bool checkIfEmpty(const std::string s) {
    return s.length() < 1;
}

// counts the occurrences of a char in a string and compresses the char and frequency in another string
std::string countAndCompressString(const std::string s) {
    std::string s2;
    int mycount = 0;
    char temp = ' ';
    for (auto c : s) {
        if (c != temp) {
            temp = c;
            mycount = std::count(s.begin(), s.end(), c);
            s2 += c;
            s2 += std::to_string(mycount);
        }
    }
    return s2;
}