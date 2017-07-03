#include <iostream>
#include <iomanip>
#include "WordObj.h" //<string> is included with header file
using namespace std;

//constructor(s)
WordObj::WordObj(){
	setWord("");
	setCapital(false);
	setLastChar("");
}
WordObj::WordObj(string word, bool capital, string last){
	setWord(word);
	setCapital(capital);
	setLastChar(last);
}

//setters
void WordObj::setWord(string word) { this->word = word; }
void WordObj::setCapital(bool cap) { this->capital = cap; }
void WordObj::setLastChar(string last) { this->lastChar = last; }
//getters
string WordObj::getWord() { return this->word; }
bool WordObj::isCapital() { return this->capital; }
string WordObj::getLastChar() { return this->lastChar; }