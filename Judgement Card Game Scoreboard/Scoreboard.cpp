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
	cout << totalplayers;


	return 0;
}