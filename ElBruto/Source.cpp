#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(int argc, char** argv) {
	char player1[30] = "\0";
	char player2[30] = "\0";
	int life_1 = 100;
	int life_2 = 100;
	int attack_1;
	int attack_2;
	int turn = 1;

	srand(time(NULL));

	attack_1 = rand() % 25 + 1;
	attack_2 = rand() % 25 + 1;

	cout << "  WELCOME TO EL BRUTO" << endl;
	cout << "-------------------------" << endl;

	cout << "Enter name player 1: ";
	cin >> player1;
	cout << endl;

	cout << "Enter name player 2: ";
	cin >> player2;
	cout << endl;

	/*if (strcmp(player1,player2)) {
		cout << "This name is already being used, change it: " << endl;
		cin >> player2;
	}*/

	cout << "LETS START THE FIGHT!" << endl;
	cout << "-------------------------" << endl << endl;

	while (life_1 > 1 && life_2 > 1) {
		attack_1 = rand() % 25 + 1;
		attack_2 = rand() % 25 + 1;

		cout << "TURN " << turn << endl << endl;

		life_2 = life_2 - attack_1;
		if (life_2 > 0)
		    life_1 = life_1 - attack_2;

		if(life_1 > 0)
			cout << "This is the life of " << player1 << ": " << life_1 << endl;
		else
			cout << "This is the life of " << player1 << ": 0" << endl;

		if(life_2 > 0 )
			cout << "This is the life of " << player2 << ": " << life_2 << endl << endl;
		else
			cout << "This is the life of " << player2 << ": 0" << endl << endl;
		turn++;
		Sleep(1200);
	}

	if (life_1 < 1)
		cout << player2 << " is the winner!! I am sorry " << player1 << " :(" << endl << endl;

	else
		cout << player1 << " is the winner!! I am sorry "  << player2 << " :(" << endl << endl;

	system("pause");
}

