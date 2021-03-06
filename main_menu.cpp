#include <iostream>
#include <string>
#include "tolower.cpp"
#include "game_start.cpp"


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
void select_main_menu_option(){
	string main_option;
	do{
		//string to hold the text that the player enters
		
		getline(cin,main_option);
		main_option = convert_to_lower(main_option);
		
		if (main_option == "quit"){
			return;
		}
		//to start a new game
		if (main_option == "play"){
			cout << "You wish to embark along the path of the underlings?  So be it..." << endl;
			cout << "~~~~~~~~~~~~~~~~~" << endl;
			//start opening sequence to game
			opening_sequence();
		}
		else{
			cout << "Menu Choice Not Valid" << endl;
		}
	}while(main_option != "quit");
}
