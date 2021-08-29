//Judgement Card Game Scoreboard code by ProxyHydra (github.com/ProxyHydra)

#include <iostream>
using namespace std;

constexpr auto MAX = 10;

class Scoreboard
{
public:
	

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
	cout << "Enter total number of rounds (default: 8): ";
	cin >> rounds;
	cout << "Number of rounds: " << rounds << endl << endl;


}