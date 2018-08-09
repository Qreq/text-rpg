#include <string>
#include <iostream>
#include "Character.hpp"

/*
 * 
 * TODO: MUST FIND A WAY TO INCORPORATE RACE INTO OPENING SEQUENCE
 * 
 */
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
		cin.ignore();
		gender = convert_to_lower(gender);
		//TODO HERE: conditional to prompt user if they entered male or female
	}while(gender != "male" && gender != "female");
	
	my_player.gender = gender;
	cout << "You notice that you are now in nothing more than a drab, baggy sack-like pelts from the dregs of the local city" << endl;
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
	
	cout << "??: Just don't be too long, I can hear the Captain coming." << endl;
	cout << "The grinning figure straightens up, allowing you to see more clearly who he is as your eyes come to focus." << endl;
	cout << "The man dons what seems to be chainmail chest plate with steal boots and gauntlets to match." << endl;
	cout <<	"Underneath all of the armour, stained cloth undergarments visibly stick to his legs.  He appears to have no helmet, allowing you to see his horrific face" << endl;
	cout << "A wicked grin matched with wild eyes tower over you, fresh saliva coating over his flicking tongue." << endl;
	cout << "He grabs a hold of your hair roughly yanking it backwards that causes you to muffle a pained moan" << endl;
	cout << "You hear the noise of a door open behind you as spit graces your face and slithers down your cheek" << endl;
	cout << "????:  Simmons, what DO you think you are you doing?  Did you NOT see this person's papers?" << endl;
	cout << "You assume the man who just walked in is the Captain that was mentioned previously, and that he held a much higher rank than the Simmons character" << endl;
	cout << "Simmons:  I didn't. I... must have misplaced it" << endl;
	cout << "His grin starts to melt into the pout of a child wishing forgiveness." << endl''
	cout << "The Captain:  Seems like you misplaced your brain as well.  Not like you could have read it anyway, even with one." << end;
	cout << "Simmons backs away as the Captain strides to your side." << endl;
	cout << "The Captain:  So sorry about the lug here.  Now remind me, what was your name?" << endl;
	
	string name;
	getline(cin,name);
	player.name = name;

}