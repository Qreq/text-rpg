#include <iostream>
#include "game_main_functions.cpp"
void await_input(){
	
}
using namespace std;

int main(){
	
	show_menu_text();
	bool exit_reponse;
	do {
		exit_reponse = select_main_menu_option();
	}while(exit_reponse == false);
	
	cout << "Thank you for playing!" << endl;
	return 0;
}