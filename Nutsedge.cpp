#include <iostream>
#include <string>

using namespace std;

class Nutsedge {

	public:
	std::string ReplaceWord(std::string phrase, std::string badWord, std::string goodWord)
	{
		int index = phrase.find(badWord);
		int length = badWord.length();
		
		phrase.erase(index, length);
		phrase.insert(index, goodWord);

		return phrase;
	}	
};

int main(){
	Nutsedge nutsedge;
	std::cout << nutsedge.ReplaceWord("The toad prince", "toad", "frog") << std::endl;
	return 0;
}
