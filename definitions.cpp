// Ruben Navarro
// 12/13/2019
// definitions.cpp
// CTCI - String Compression
// Performs basic non spaced string compression using the counts of repeated chars

#include <string>

// checks if string is empty
bool checkIfEmpty(const std::string s) {
    return s.length() < 1;
}

// counts the occurrences of a char in a string and compresses the char and frequency in another string
std::string countAndCompressString(const std::string s) {
    std::string s2;
    bool flag = false;
    int count = 1;
    char temp = ' ';

    // loops through string
    for (int i = 0; i < s.size(); ++i) {
        // matches current char with previous chars and increments count
        if (temp == s[i]) {
            temp = s[i];
            ++count;
        }
        // if current char is not the same as previous char, adds previous char to string and sets count back to 1
        else if (temp != s[i]) {
            if (flag)
                s2 += std::to_string(count);
            temp = s[i];
            s2 += temp;
            count = 1;
        }
        flag = true;
    }
    s2 += std::to_string(count);

    return s2;
}