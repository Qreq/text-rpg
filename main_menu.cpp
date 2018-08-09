#include <iostream>
#include <string>
#include "tolower.cpp"


using namespace std;

//displays welcome message and menu options
void show_menu_text(){
	cout << "~~~~~~~~~~~~~~~" << endl;
	string welcome_message = "Welcome to *game name here*";
	cout << welcome_message << endl;
	cout << "Select an option:" << endl;
	cout << "Play" << endl;
	cout << "Quit" << endl;
	cout << "~~~~~~~~~~~~~~~" << endl;
}

//handle what the player inputs
bool select_main_menu_option(){
	
	//string to hold the text that the player enters
	string main_option;
	getline(cin,main_option);
	main_option = convert_to_lower(main_option);
	
	if (main_option == "quit"){
		return true;
	}
	//to start a new game
	if (main_option == "play"){
		//TODO: call function to start a new game
	}
	else{
		cout << "Menu Choice Not Valid" << endl;
	}
}
