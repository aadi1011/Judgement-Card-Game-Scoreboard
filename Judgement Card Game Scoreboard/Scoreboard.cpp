//Judgement Card Game Scoreboard code by ProxyHydra (github.com/ProxyHydra)

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

constexpr auto MAX = 10;

class Scoreboard
{
public:
	void prediction();
	void winning();

private:
	int predict;
	int win;
};

void Scoreboard::prediction()
{
	cout << "Enter how many rounds you predict to win: ";
	cin >> predict;
}

void Scoreboard::winning()
{
	cout << "Enter how many rounds you won: ";
	cin >> win;
}

void roundsandtrump(int totalplayers)
{

	int rounds = 8;
	int j = 0, k = 1;
	cout << "Enter total number of rounds (default: 8): ";
	cin >> rounds;
	string trumps[4] = { "Spades", "Diamonds", "Clubs", "Hearts" };
	cout << "Number of rounds: " << rounds << endl << endl;
	for (int i = 0; i < rounds; i++)
	{	
		cout << "Round " << i + 1 << "\n";
		cout << "Trump: " << trumps[j] << endl << endl;
		j++;
		if (j == 4)		//fix for issue #2 (array loop)
		{
			j = 0;
		}
		cout << "Player " << k << endl;
	}

}

int main()
{	
	cout << "Welcome to Judgement Scoreboard\n\n";
	int totalplayers;
	cout << "Enter total number of players: ";
	cin >> totalplayers;
	cout << "\nTotal number of players: " << totalplayers << endl << endl;
	roundsandtrump(totalplayers);

	return 0;
}
