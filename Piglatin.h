#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// is_vowel returns true if the given
// character is a vowel; false otherwise.
bool is_vowel(char c)
{
    c = tolower(c);
    return c == 'a'
        || c == 'e'
        || c == 'i'
        || c == 'o'
        || c == 'u'
        || c == 'y'
        ;
}

// to_piglatin translates a string to piglatin.
//
// For words that begin with consonant sounds,
// the initial consonant or consonant cluster
// is moved to the end of the word, and "ay"
// is added.
// For words that begin with vowel sounds or
// silent letter, you just add "way".
string to_piglatin(const string& str)
{
    auto iter = find_if(str.begin(), str.end(), is_vowel);
    if (iter == str.begin()) {
        return str + "way";
    }
    else if (iter != str.end()) {
        string ingstray(iter, str.end());
        ingstray.append(str.begin(), iter);
        return ingstray + "ay";
    }
    return str;
}
