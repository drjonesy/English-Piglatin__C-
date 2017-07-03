// Contains a string word object, boolean to test for capitale letter, and boolean to test for comma at end of word
#include <string>
using namespace std; // needed for std::string

class WordObj {
// member variables
private:
	string word;
	bool capital;
	string lastChar; 
// object functions	
public:
	// constructor
	// The overloaded constructor is not needed, I just like to give a base class options 
	WordObj();
	WordObj(string, bool, string);
	//setters (mutators)
	void setWord(string);
	void setCapital(bool);
	void setLastChar(string);
	//getters (accessors)
	string getWord(); 
	bool isCapital(); // get and check for true
	string getLastChar(); // get and check for true
};