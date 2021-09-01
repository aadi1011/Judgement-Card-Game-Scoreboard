//Judgement Card Game Scoreboard code by ProxyHydra (github.com/ProxyHydra)

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

constexpr auto MAX = 10;

class Scoreboard
{
public:
	void scoring();

private:
	int prediction;
	int actualwin;
};


void roundsandtrump()
{
	int rounds = 8;
	int j = 0;
	cout << "Enter total number of rounds (default: 8): ";
	cin >> rounds;
	string trumps[4] = { "Spades", "Diamonds", "Clubs", "Hearts" };
	cout << "Number of rounds: " << rounds << endl << endl;
	for (int i = 0; i < rounds; i++)
	{	
		cout << "Trump for this round is: " << trumps[j] << endl;
		j++;
		if (j == 4)
		{
			j = 0;
		}
	}

}

int main()
{
	Scoreboard player[MAX];
	
	cout << "Welcome to Judgement Scoreboard\n\n";
	int totalplayers;
	cout << "Enter total number of players: ";
	cin >> totalplayers;
	cout << "\nTotal number of players: " << totalplayers << endl << endl;
	roundsandtrump();

	return 0;
}
