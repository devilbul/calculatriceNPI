#ifndef PROJETCPP_STRINGUTILS_H
#define PROJETCPP_STRINGUTILS_H

#include <cstdio>
#if _WIN32
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#include <iterator>
#include <stack>

inline char separator() {
#if _WIN32
    return '\\';
#else
    return '/';
#endif
}

using namespace std;

bool startsWith(string, string);

bool allDigits(string);

bool allLetters(string);

string getCurrentWorkingDir();

string conversionStringVersAscii(string);

string conversionAsciiVersString(string str);

#endif //PROJETCPP_STRINGUTILS_H
