#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main() {
	int correctnum;
	int guess;
	int moves=0;
	char replay;

	start:
	system("Color FC");
	cout << "Lets play the number guessing game!" << endl << endl;
	srand(time(0));
    correctnum =  (rand() % 100 + 1);
	cout << "I'm thinking of a number between 0-100. What do you think it is?" << endl;
	guess:
	cin >> guess;
	if (guess < 1 || guess > 100) {
		cout << "Please enter a number between 1-100." << endl;
	}
	else if (guess > correctnum) {
		cout << "The number is lower." << endl;
		moves+=1;
	}
	else if (guess < correctnum) {
		cout << "The number is higher." << endl;
		moves+=1;
	}
	else if (guess == correctnum) {
		moves+=1;
		cout << "Correct! The number. The number is " << correctnum << "."<< endl;
		cout << "It took you " << moves << " moves to guess the correct number." << endl;
		moves=0;
		goto end;
	}
		goto guess;
end:
	cout << endl << endl;
	cout << "Would you like to play again? (Y/N)" << endl;
	replayagain:
	cin >> replay;
	if (replay == 'Y' || replay =='y') {
		system("CLS");
		goto start;
	}
	else if (replay == 'N' || replay =='n') {
	goto bye;
	}
	else {
		cout << "Please press either Y or N." << endl;
		goto replayagain;
	}

	
	cin.ignore();
	cin.get();
	bye:
	return 0;
}