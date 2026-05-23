#include <iostream>
using namespace std;

// convert string to lowercase
void toLowerCase(string &s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
}

// sort characters of string
void sortString(string &s) {
    int n = s.length();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

// check anagram
bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    toLowerCase(s1);
    toLowerCase(s2);

    sortString(s1);
    sortString(s2);

    return s1 == s2;
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are Anagrams" << endl;
    } else {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are not Anagrams" << endl;
    }

    return 0;
}

