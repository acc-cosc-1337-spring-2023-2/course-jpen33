#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>

using std::cout; using std::cin; 
using std::make_unique;

int main() 
{
	unique_ptr<TicTacToe> game;
	TicTactoeData data;
	TicTacToeManager manager(data);
	string playerStart;
	auto anotherGame = 'y';
	int x, o, t, size;

	do
	{
		do
		{
			cout<<"Please choose a board size. 3 is for 3x3, 4 is for 4x4: ";
        	cin>>size;
		} 
		while (size != 3 && size != 4);
		

        if(size == 3)
            game = make_unique<TicTacToe3>();
        else if(size == 4)
            game = make_unique<TicTacToe4>();


		
		cout<<"Please enter X or O to start: ";
		cin>>playerStart;
		cout<<"To exit,enter 0.\n";
		


		game->start_game(playerStart);

		while(!game->game_over())
		{
			cin>>*game;
			cout<<*game;
		}
		

		cout<<"\nGame over. Winner is: "<<game->get_winner()<<"\n";
		manager.save_game(game);
		manager.get_winner_total(x, o, t);

		cout<<"O wins: "<<x<<"\n";
		cout<<"X wins: "<<o<<"\n";
		cout<<"Ties: "<<t<<"\n";

		cout<<"\nPlay again? Enter y for yes or n for no: ";
		cin>>anotherGame;

		
		
		while(anotherGame != 'y' && anotherGame != 'n' && anotherGame != 'Y' && anotherGame && 'N')
		{
			cout<<"This is an invalid input. Please enter y or n: ";
			cin>>anotherGame;
		}
	}
	while (anotherGame == 'y' || anotherGame == 'Y');

	return 0;
}
