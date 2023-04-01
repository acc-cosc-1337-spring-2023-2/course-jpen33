//cpp
#include "tic_tac_toe.h"

void TicTacToe::set_next_player()
{

    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full()
{
    for (int i = 0; i < 9; i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}
void TicTacToe::clear_board()
{
    for (int i = 0; i < 9; i++) { pegs[i] = " "; }
}
bool TicTacToe::game_over()
{
   
    if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else{return false;}
}
void TicTacToe::start_game(string first_player)
{
        
    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
    }
      
    clear_board();
    }
void TicTacToe::mark_board(int position)
{
  
    pegs[position - 1] = player;
    set_next_player();
}
string TicTacToe::get_player() const {return player;} 
void TicTacToe::display_board() const 
{
    ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<pegs[(i * 3) + j];
            if (j < 2){cout<<"|";}
        }
        if(i < 2){cout<<"\n";}
    }
    cout<<"\n";
}
string TicTacToe::get_winner()
{
    return winner;
}
bool TicTacToe::check_column_win()
{   
    for(int i = 0; i < 3; i++)
    {
        if(pegs[i] == "X" && pegs[i+3] == "X" && pegs[i+6] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+3] == "O" && pegs[i+6] == "O")
        {
            return true;
        }
    }
    return false;
}
bool TicTacToe::check_row_win()
{   
    for(int i = 0; i < 9; i+=3)
    {
        if(pegs[i] == "X" && pegs[i+1] == "X" && pegs[i+2] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O")
        {
            return true;
        }
    }
    return false;
}
bool TicTacToe::check_diagonal_win()
{   
  
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X"))
    {
        return true;
    }
    else if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
    {
        return true;
    }

 
    else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
    {
        return true;
    }
    
    else{return false;}
}
void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}
