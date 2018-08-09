#include <iostream>
#include "game_main_functions.cpp"
void await_input(){
	
}
using namespace std;

int main(){
	bool exit_reponse;
	do {
		exit_reponse = main_menu();
	}while(exit_reponse == false);
	
	cout << "Thank you for playing!" << endl;
	return 0;
}