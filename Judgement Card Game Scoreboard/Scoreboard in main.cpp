#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<vector>
#include <string>

using namespace std;

void main()
{
	int totalplayers;
	cout << "Welcome to Judgement Game\n\nEnter the number of players:";
	cin >> totalplayers;
	vector<string> playernames(totalplayers);
	cout << "\nEnter names of players:\n";
	
	for (int i = 0; i < totalplayers; i++)
	{
		cout << "Player " << i + 1 << ", enter you name: ";
		cin >> playernames[i];
	}

	cout << "\nPlayer list:\n";
	for (int i = 0; i < totalplayers; i++)
	{
		cout << "Player " << i + 1 << ": " << playernames[i] << endl;
	}
	
	cout << "\n\nsize= " << sizeof(playernames)/sizeof(playernames[0]);
}
