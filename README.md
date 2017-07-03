# English to Piglatin Converter in C++
##### Uses Objects and Vectors

![N|Solid](http://www.hashin.in/hash/_layout/images/expertise/cpp.png)

## About
All files are heavily documented to assist in explaination and understanding of functionality.
##### Word Objects (WordObj.h and WordObj.cpp)
Creates a base class for holding Objects. The objects are called WordObj. 
Each WordObj contains: (string, bool, string)

- string = a word
- bool = if true, then the first letter of the word is a capital
- string = "" or if the end of the word contains a non alpha then the last character is placed here. and the the first string is shorted by one character.

##### VectorObjects.h (functions)
All of these function are data return types. With return types the objects can be reassigned, duplicated, appended, or they can be used with an Application like MFC (Microsoft Foundation Class)
- vector<string> splitStringToVector(string, const char*);
- vector<WordObj> vectorOfWordObjects(vector<string>);
- vector<WordObj> engToPiglatin(vector<WordObj>);
- string wordsToString(vector<WordObj>);
- string strToLower(string);

##### Piglatin.h
- https://gist.github.com/zachwhaley/9442902 (refer to)

##### main.cpp
The only included in the main should be "VectorObject.h"
The main is simply used to test output. Currently it takes in a string, converts to string vector, then to WordObj Vector, gets duplicated and conveted to piglatin vector, converts to string, converts string to lowercase, and prints the output using cout.

