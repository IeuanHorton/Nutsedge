#include <iostream>
#include <string>

using namespace std;

class Nutsedge {

	public:
	bool ReplaceWord(std::string& phrase, std::string& badWord, std::string& goodWord)
	{
		int index = phrase.find(badWord);
		int length = badWord.length();
		
		phrase.erase(index, length);
		phrase.insert(index, goodWord);

		return true;
	}	
};

int main(){
	Nutsedge nutsedge;

	std::string phrase = "The toad prince";
	std::string badword = "toad";
	std::string goodword = "frog";
	
	nutsedge.ReplaceWord(phrase, badword, goodword); 

	std::cout << phrase << std::endl;
	return 0;
}
