#include <iostream>
#include <string>
#include "tolower.cpp"


using namespace std;

//displays main menu options to the player
bool main_menu(){
	string welcome_message = "Hello, and Welcome to *game name here*";
	cout << welcome_message << endl;
	cout << "Select an option:" << endl;
	cout << "Play" << endl;
	cout << "Quit" << endl;
	cout << "~~~~~~~~~~~" << endl;
	
	string main_option;
	getline(cin,main_option);
	main_option = convert_to_lower(main_option);
	
	if (main_option == "quit"){
		return true;
	}
	if (main_option == "play"){
		//TODO: call function to start a new game
	}
}