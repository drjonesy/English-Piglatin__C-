#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <ctype.h>
#include <algorithm>
#include "WordObj.h"
#include "Piglatin.h"
#include "English.h"

using namespace std;

vector<string> splitStringToVector(string, const char*);
vector<WordObj> vectorOfWordObjects(vector<string>);
vector<WordObj> engToPiglatin(vector<WordObj>);
vector<WordObj> pigToEnglish(vector<WordObj>);
string wordsToString(vector<WordObj>);
string strToLower(string);

//returns a vector of strings
//uses the strtok to split a string by defined delimiator (character)
vector<string> splitStringToVector(string text, const char* splitByCharacter){
	char *input = (char*)text.c_str(); //convert string text to char array pointer
	vector<string> s; // define vector
    char *token = strtok(input, splitByCharacter);
    while (token != NULL) {
		s.push_back(token); //add each new word to end of vector
        token = strtok(NULL, splitByCharacter);
    }
	return s;
}//end textToTranslate function


// converts a vector of type string to a vector of type WordObj
// tests if the first letter of each word is a capital, if true assign true
// tests if the last character in the word is not an alpha character
// inserts a new WordObj(string, bool, string)
vector<WordObj> vectorOfWordObjects(vector<string> justWords){
	vector<WordObj> words;
	for(size_t i = 0; i < justWords.size(); i++){
		string word = justWords.at(i);
		bool capital = false;
		string lastChar = "";
		//check if word contains capital
		if(isupper(justWords.at(i)[0])){
			capital = true;
		}
		//check if words contains nonAlphaCharacter at end
		if(!isalpha(justWords.at(i)[justWords.at(i).size() - 1])){
			lastChar = word.at(word.size() - 1);
			word.resize(word.size() - 1); // removes last character from word
		}
		//insert into words
		words.insert( words.begin() + i, WordObj(word, capital, lastChar) );
	}
	return words;
}//end vectorOfWordObjects


//english to piglatin (takes vector of type WordObj)
//returns a vector converted to piglatin
vector<WordObj> engToPiglatin(vector<WordObj> v) {
    for (size_t i = 0; i < v.size(); i++) {
		string str = v.at(i).getWord();
		v.at(i).setWord(to_piglatin(str));
    }
	return v;
}//end engToPiglatin

//piglatin to english
vector<WordObj> pigToEnglish(vector<WordObj> v) {
	 for (size_t i = 0; i < v.size(); i++) {
		string str = v.at(i).getWord();
		v.at(i).setWord(pig_to_english(str));
    }
	return v;
}//end pigToEnglish

// to string with special characters (still capitalized)
string wordsToString(vector<WordObj> v){
	string text = "";
	for(size_t i = 0; i < v.size(); i++){
		//text = current index word
		text += v.at(i).getWord();
		//remove - hyphen
		text.erase(find(text.begin(), text.end(), '-'));
		//append lastChar if contains character
		if(v.at(i).getLastChar() != ""){
			text += v.at(i).getLastChar();
		}
		//append whitespace if not last index
		if(i < v.size() - 1){
			text += " ";
		}
	}//end for
	return text;
}//end wordsToString

//convert to string to lowercase
string strToLower(string str){
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

