//h
#include <iostream>
#include <vector>  
#include "tic_tac_toe.h"

using std::ostream; using std:: vector;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
private:
    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);

public:
    void save_game(TicTacToe b);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void get_winner_total(int& o, int& x, int& t);
};

{
}

#endif
