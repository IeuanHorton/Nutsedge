#include <iostream>
#include <string>

using namespace std;

class Nutsedge {

	public:
	bool AutoReplace(std::string& text, std::string& target, std::string& replacement)
	{
		int index = text.find(target);

		if(index == std::string::npos){
			return false;
		}

		int length = target.length();
	        
	        if(length > text.length()){
			return false;
		}	

		text.erase(index, length);
		text.insert(index, replacement);

		return true;
	}	
};

int main(){
	Nutsedge nutsedge;

	//Temp code for testing
	std::string phrase = "The toad prince";
	std::string target = "toad";
	std::string replacement = "frog";
	
	nutsedge.AutoReplace(phrase, target, replacement); 

	std::cout << phrase << std::endl;

	phrase = "toa";

	std::cout << nutsedge.AutoReplace(phrase, target, replacement) << std::endl;

	std::cout << phrase << std::endl;

	return 0;
}
