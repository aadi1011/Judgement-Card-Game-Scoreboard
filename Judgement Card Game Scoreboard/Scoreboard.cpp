//Judgement Card Game Scoreboard code by ProxyHydra (github.com/ProxyHydra)

#include <iostream>
#include <stdio.h>

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

int main()
{
	Scoreboard player[MAX];
	
	cout << "Welcome to Judgement Scoreboard\n\n";
	int totalplayers;
	cout << "Enter total number of players: ";
	cin >> totalplayers;
	cout << "\nTotal number of players: " << totalplayers << endl;


	return 0;
}

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
		if (j==4)
		{
			j = 0;
		}
		cout << "Trump for this round is: " << trumps[j];
		j++;
	}

}