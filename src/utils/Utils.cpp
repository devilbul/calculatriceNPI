#include "Utils.h"

using namespace std;

bool startsWith(string mainStr, string toMatch) {
    return mainStr.find(toMatch) == 0;
}

bool allDigits(string s) {
    return all_of(s.begin(), s.end(), [](char c) { return isdigit(c); });
}

bool allLetters(string s) {
    return all_of(s.begin(), s.end(), [](char c) { return isalpha(c); });
}

string getCurrentWorkingDir() {
    char buff[FILENAME_MAX];
    GetCurrentDir(buff, FILENAME_MAX);
    string current_working_dir(buff);
    return current_working_dir;
}

string conversionStringVersAscii(string str) {
    stringstream out;

    for (char i : str)
        out << int(i) << " ";

    return out.str();
}

string conversionAsciiVersString(string str) {
    stringstream outSS;
    string out;
    istringstream calculNotation(str);
    istringstream delimiter(" ");
    vector<string> results(istream_iterator<string>{calculNotation}, istream_iterator<string>(delimiter));

    for (auto &result : results)
        outSS << (char) stoi(result);

    out = outSS.str();

    if (startsWith(out, "-"))
        replace(out.begin(), out.end(), '-', '_');

    return out;
}