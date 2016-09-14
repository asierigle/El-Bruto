#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(int argc, char** argv) {
	
	char* player_1 = new char[30];
	char* player_2 = new char[30];
	int life_1 = 100;
	int life_2 = 100;
	int attack_1;
	int attack_2;
	int turn = 1;

	srand(time(NULL));

	cout << "\t  WELCOME TO EL BRUTO" << endl;
	cout << "\t-------------------------" << endl;

	cout << "\tEnter name player 1: ";
	cin >> player_1;
	cout << endl;

	cout << "\tEnter name player 2: ";
	cin >> player_2;
	cout << endl;

	if (strcmp(player_1,player_2) == 0) {
		cout << "\tThis name is already being used, change it: " << endl;
		cin >> player_2;
	}

	Sleep(1200);

	cout << "\tLETS START THE FIGHT!" << endl;
	cout << "\t-------------------------" << endl << endl;

	while (life_1 > 1 && life_2 > 1) {
		attack_1 = rand() % 25 + 1;
		attack_2 = rand() % 25 + 1;

		cout << "\tTURN " << turn << endl << endl;

		life_2 = life_2 - attack_1;
		if (life_2 > 0)
		    life_1 = life_1 - attack_2;

		if(life_1 >= 0)
			cout << "\tThis is the life of " << player_1 << ": " << ++life_1 << endl;
		else
			cout << "\tThis is the life of " << player_1 << ": 0" << endl;

		if(life_2 >= 0 )
			cout << "\tThis is the life of " << player_2 << ": " << ++life_2 << endl << endl;
		else
			cout << "\tThis is the life of " << player_2 << ": 0" << endl << endl;
		turn++;
		Sleep(1200);
	}

	if (life_1 <= 0)
		cout << "\t" << player_2 << " is the winner!! I am sorry " << player_1 << " :(" << endl << endl;

	if (life_2 <= 0)
		cout << "\t" << player_1 << " is the winner!! I am sorry "  << player_2 << " :(" << endl << endl;

	cout << "\t";
	system("pause");
}

