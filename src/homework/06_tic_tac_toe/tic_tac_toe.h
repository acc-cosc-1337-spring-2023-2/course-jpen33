//h
#include <iostream>
#include <string>
#include <vector>

using std::istream; using std::ostream;
using std::cout; using std::cin;
using std::string; using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{

public:
    bool game_over()
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    string get_winner();


private:
    
    string player;
    vector<string> pegs{9, " "};

    
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    string player;
   
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
   
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

};

#endif
//part One!
//part two done!
//part 3 done//
