#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game; 

    auto prompt = 'Y';

    while (prompt == 'Y' || prompt == 'y')
    {
        string first_player;
        int position;
        while(true)
        {
            cout<<"Enter X or O: ";
            cin>>first_player;
           
            if(first_player == "X" || first_player == "O")
            {
                break;
            }
            else
            {
                cout<<"This is an invaild input. Please enter X or O to continue.\n";
            }
        game.start_game(first_player);
        while(game.game_over() == false)
        {   
            while(true)
            {
                cout<<"Enter position from 1 to 9: ";
                cin>>position;
                if(position >= 1 && position <=9)
                {
                    break;
                }
                else
                {
                    cout<<"This is a invalid input. Please enter a number from 1 to 9. \n";
                }
            }
            game.mark_board(position);
            game.display_board(); 
        }
        cout<<"Game over\n"<<"The winner is "<<game.get_winner()<<".\n";

        while (true)
        {
            cout<<"Play a new game? (Y/N) ";
            cin>>prompt;
        
            if (prompt == 'n' || prompt == 'N' || prompt == 'y' || prompt == 'Y')
            {
                break;
            }
            else{cout<<"This is a invalid input. Please enter the following: Y or N\n";}
        }
    }
	return 0;
}

