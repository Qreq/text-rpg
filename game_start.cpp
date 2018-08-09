#include <string>
#include <iostream>
#include "Character.hpp"


using namespace std;

//new game 
void opening_sequence(){
	Character my_player;
	cout << "You awaken to fabricated darkness, bound to a wooden stool.  You have no knowledge of the past 24 hours, no matter how hard you think." << endl;
	cout << "An accute pain reminds you that you're still alive.  Your hearing, though muffled, slowly attunes." << endl;
	cout << "There are gruff voices around you.  About what, you do not understand." << endl;
	cout << "???: Who even are they?  Just another idiot too stupid to evade the law? Again?  It's so boring with these twigs" << endl;
	cout << "??: Now, now.  We were just told to keep them here until further orders." << endl;
	cout << "???: I don't care, I'm bored.  Let me just play with one." << endl;
	cout << "??: Fine, but it'll be on your head, not mine." << endl;
	cout << "A firm hand grabs onto your head and rips off the head cover, a strong light hanging overhead, flooding your vision." << endl;
	cout << "~~~~~~~~~~~" << endl;
	//string to hold a one word input of gender
	string gender;
	cout << "What will your gender be? (male/female)" << endl;
	do{
		cin >> gender;
		gender = convert_to_lower(gender);
		//TODO HERE: conditional to prompt user if they entered male or female
	}while(gender != "male" && gender != "female");
	
	my_player.gender = gender;
	
	cout << "Your eyes fix upon the chiseled face in front of you, a smile plastered across it." << endl; 
	if (my_player.gender == "female"){
		my_player.possessive_pronoun = "her";
		my_player.subject_pronoun = "she";
		cout << "???: Mmm, we have some fresh meat.  What's a whore like you doing here?  No matter, I'm going to do wonders to you." << endl;
	}
	else{
		my_player.possessive_pronoun = "him";
		my_player.subject_pronoun = "he";
		cout << "???: Oh, how boring.  Another delinquent.  At least this one is ripe." << endl;
	}
	
	
	
	
	
}