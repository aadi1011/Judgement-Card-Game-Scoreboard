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
	cout << "\n\nsize= " << sizeof(playernames)/sizeof(playernames[0]);
}
