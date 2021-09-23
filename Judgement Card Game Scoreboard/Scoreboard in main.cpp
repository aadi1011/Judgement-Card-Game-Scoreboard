#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

void main()
{
	int totalplayers;
	cout << "Welcome to Judgement Game\n\nEnter the number of players:";
	cin >> totalplayers;
	vector<string> playernames(totalplayers); //change
	cout << "\nEnter names of players:\n";
	
	for (int i = 0; i < totalplayers; i++)
	{
		cout << "Player " << i + 1 << ", enter you name: ";
		cin >> playernames[i];
	}

	system("cls");
	cout << "\nPlayer list:\n";
	int playernumber = 0;
	for (int playernumber = 0; playernumber < totalplayers; playernumber++)
	{
		cout << "Player " << playernumber + 1 << ": " << playernames[playernumber] << endl;
	}

	int rounds;
	cout << "Enter total number of rounds (default: 8): ";
	cin >> rounds;
	cout << "Total rounds: " << rounds;

	string trumps[4] = { "Spades", "Diamonds", "Clubs", "Hearts" };

	int j = 0;
	for (int i = 0; i < rounds; i++)
	{
		cout << "Round " << i + 1 << "\n";
		cout << "\nTrump card for the round is: " << trumps[j] << endl;
		
		cout << "Player " << playernumber + 1 << ": "; //LAST EDIT
		
		j++;
		if (j == 4)		//fix for issue #2 (array loop)
		{
			j = 0;
		}
	}
}
