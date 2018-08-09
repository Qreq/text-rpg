#include <iostream>
#include <string>


using namespace std;

//displays main menu options to the player
bool main_menu(){
	string welcome_message = "Hello, and Welcome to *game name here*";
	cout << welcome_message; << endl;
	cout << "Select an option:" << endl;
	cout << "Play" << endl;
	cout << "Exit" << endl;
	cout << "~~~~~~~~~~~" < endl;
	
	string main_option;
	getline(cin,main_option);
	main_option.tolower();
	
	if (main_option == "quit"){
		return true;
	}
	if (main_option == "play"){
		//TODO: call function to start a new game
	}
}