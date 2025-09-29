//==========================================================
//23 toothpicks
// * If there are more than 4 toothpicks left, then the computer should withdraw 4 – X
//toothpicks, where X is the number of toothpicks the human withdrew on the previous
//turn.
//* If there are 2 to 4 toothpicks left, then the computer should withdraw enough
//toothpicks to leave 1.
//* If there is 1 toothpick left, then the computer has to take it and loses.
//==========================================================

#include <iostream>
#include <set>
#include <cctype>
#include <string>
using namespace std;

int main() {
	int player, computer, picks_left = 23; 
	
	while(picks_left > 0){
		cout << "Player: "; 
		cin >> player; 
		if((player > 3) || (player < 1)){
			cout << "Invalid input. Please try again. \n";
		}
		else{
			picks_left -= player;
			cout << "(" << picks_left << " toothpicks left)\n";
		
			if(picks_left == 0){
				cout << "Computer wins!";
				exit(0);
			}
			else if(picks_left > 4){
				computer = (4-player);
				picks_left -= computer;
				cout << "Computer: " << computer << " (" << picks_left << " toothpicks left) \n";
			}
			else if((picks_left <= 4) && (picks_left >= 2)){
				computer = picks_left - 1;
				picks_left = 1;
				cout << "Computer: " << computer << " (" << picks_left << " toothpicks left)\n";
			}
			else if(picks_left == 1){
				computer -= picks_left;
				cout << "Computer: " << computer << " (" << picks_left << " toothpicks left)\n";
				cout << "Player wins!";
				exit(0);
			}
		}
	}
    return 0;
}
