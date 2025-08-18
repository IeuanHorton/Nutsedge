#include <iostream>
#include <string>
#include "Nutsedge.h"

using namespace std;

namespace Nutsedge{ 

bool AutoReplace(std::string& text, std::string& target, std::string& replacement)
{
	int index = text.find(target);

	//Checking if the target is inside the text
	if(index == std::string::npos){
		return false;
	}

	int length = target.length();
	        
	text.erase(index, length);
	text.insert(index, replacement);

	return true;
}	

}

/*int main(){

	//Temp code for testing
	std::string phrase = "The toad prince";
	std::string target = "toad";
	std::string replacement = "frog";
	
	std::cout << Nutsedge::AutoReplace(phrase, target, replacement) << std::endl; 

	std::cout << phrase << std::endl;

	phrase = "toa";

	std::cout << Nutsedge::AutoReplace(phrase, target, replacement) << std::endl;

	std::cout << phrase << std::endl;

	return 0;
}*/
