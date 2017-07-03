//piglatin to english
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// is_vowel returns true if the given
// character is a vowel; false otherwise.
bool is_vowel2(char c)
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

// convert piglatin word back to english
// return string
string pig_to_english(string str){
	auto iter = find_if(str.begin(), str.end(), is_vowel2);
	string firstChars = "";
	string newStr = "";
	if(str.substr(str.size() - 3) == "-ay"){
		str.resize(str.size() - 3);
		//check if first character is vowel
		if(iter == str.begin()){
			
		}
		firstChars = str.at(str.size() - 1);
		str.resize(str.size() - 1);
		newStr = firstChars + str;
	}
	else if(str.substr(str.size() - 4) == "-way"){
		str.resize(str.size() - 4);
		newStr = str;
	}
	return newStr;
}
