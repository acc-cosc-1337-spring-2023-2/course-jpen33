//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    
  else if(winner == "O")
    {
        o_win++;
    }
    
  else
    {
        ties++;
    }
}

void TicTacToeManager::save_game(TicTacToe b)
{
   
    update_winner_count(b.get_winner());
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
 
    for ( const auto& game : manager.games)
    {
        out << game << "\n";
    }
    return out;
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

{
}
