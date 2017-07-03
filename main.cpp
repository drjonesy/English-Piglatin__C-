#include "VectorObjects.h"

using namespace std;

int main(int argc, char **argv)
{

	string preamble = "We the People of the United States, in Order to form a more perfect Union, establish Justice, insure domestic Tranquility, provide for the common defence, promote the general Welfare, and secure the Blessings of Liberty to ourselves and our Posterity, do ordain and establish this Constitution for the United States of America.";
	
	vector<string> justWords = splitStringToVector(preamble, " ");
	vector<WordObj> words = vectorOfWordObjects(justWords);
	
	vector<WordObj> piglatin = engToPiglatin(words); // contains vector of piglatin words
	string pigString = wordsToString(piglatin); // a string with the words and punctuation in piglatin
	string pigLow = strToLower(pigString); // applies lowercase to all characters.
	cout << pigLow << endl;

	return 0;
}
