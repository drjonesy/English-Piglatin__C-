#include "VectorObjects.h"

using namespace std;

int main(int argc, char **argv)
{

	string str = "We the People of the United States, in Order to form a more perfect Union, establish Justice, insure domestic Tranquility, provide for the common defence, promote the general Welfare, and secure the Blessings of Liberty to ourselves and our Posterity, do ordain and establish this Constitution for the United States of America.";
	
	vector<string> strVector = splitStringToVector(str, " ");
	vector<WordObj> engVector = vectorOfWordObjects(strVector);
	
	vector<WordObj> piglatinVector = engToPiglatin(engVector); // contains vector of piglatin words
	string pigString = wordsToString(piglatinVector); // a string with the words and punctuation in piglatin
	string pigLowercase = strToLower(pigString); // applies lowercase to all characters.
	cout << pigLowercase << endl;

	return 0;
}
