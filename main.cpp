#include "VectorObjects.h"

using namespace std;
string pig_to_english(string);

int main(int argc, char **argv)
{

	cout << "\n\n";
	
	string str = "We the People of the United States, in Order to form a more perfect Union, establish Justice, insure domestic Tranquility, provide for the common defence, promote the general Welfare, and secure the Blessings of Liberty to ourselves and our Posterity, do ordain and establish this Constitution for the United States of America.";
	cout << str << endl;
	
	
	cout << "\n\n";
	
	vector<string> strVector = splitStringToVector(str, " ");
	vector<WordObj> engVector = vectorOfWordObjects(strVector);
	
	vector<WordObj> piglatinVector = engToPiglatin(engVector); // contains vector of piglatin words
	string pigString = wordsToString(piglatinVector); // a string with the words and punctuation in piglatin
	string pigLowercase = strToLower(pigString); // applies lowercase to all characters.
	cout << pigLowercase << endl;
	
	cout << "\n\n";
	
	vector<WordObj> engVector2 = pigToEnglish(piglatinVector);
	string engString = wordsToString(engVector);
	cout << engString << endl;
	
	
	cout << "\n\n";

	return 0;
}

