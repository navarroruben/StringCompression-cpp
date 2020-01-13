// Ruben Navarro
// 12/13/2019
// prototypes.h
// CTCI - String Compression
// Performs basic non spaced string compression using the counts of repeated chars

#include <string>

#ifndef PROTOTYPES_H
#define PROTOTYPES_H

bool checkIfEmpty(const std::string);                  // checks if string is empty
std::string countAndCompressString(const std::string); // counts the occurrences of a char in a string and compresses the char and frequency in another string

#endif //PROTOTYPES_H
