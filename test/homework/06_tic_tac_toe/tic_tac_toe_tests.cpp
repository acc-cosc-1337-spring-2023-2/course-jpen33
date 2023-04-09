#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);

}

TEST_CASE("Test TicTacToe")
{
	
	TicTacToe test_instance;
	test_instance.start_game("X")

	test_instance.mark_board(1);
	REQUIRE(test_instance.game_over() == false);

	test_instance.mark_board(2);
	REQUIRE(test_instance.game_over() == false);

	test_instance.mark_board(3);
	REQUIRE(test_instance.game_over() == false);

	test_instance.mark_board(4);
	REQUIRE(test_instance.game_over() == false);

	test_instance.mark_board(5);
	REQUIRE(test_instance.game_over() == false);

	test_instance.mark_board(7);
	REQUIRE(test_instance.game_over() == false);

	test_instance.mark_board(6);
	REQUIRE(test_instance.game_over() == false);

	test_instance.mark_board(9);
	REQUIRE(test_instance.game_over() == false);

	test_instance.mark_board(8);
	REQUIRE(test_instance.game_over() == true);

}

TEST_CASE("Test first player set to X.")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	REQUIRE(test_instance.get_player() == "X");
}

TEST_CASE("Test first player to O.")
{
	TicTacToe test_instance;
	test_instance.start_game("O");

	REQUIRE(test_instance.get_player() == "O");
}

TEST_CASE("Test Win by the first column.")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	test_instance.mark_board(1);
	test_instance.mark_board(2);
	test_instance.mark_board(4);
	test_instance.mark_board(3);
	test_instance.mark_board(7);
	REQUIRE(test_instance.game_over() == true);
}

TEST_CASE("Test Win by the second column")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	test_instance.mark_board(2);
	test_instance.mark_board(1);
	test_instance.mark_board(5);
	test_instance.mark_board(4);
	test_instance.mark_board(8);
	REQUIRE(test_instance.game_over() == true);
}
TEST_CASE("Test Win by the third column")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	test_instance.mark_board(3);
	test_instance.mark_board(1);
	test_instance.mark_board(6);
	test_instance.mark_board(2);
	test_instance.mark_board(9);
	REQUIRE(test_instance.game_over() == true);
}

TEST_CASE("Test Win by the first row")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	test_instance.mark_board(1);
	test_instance.mark_board(4);
	test_instance.mark_board(2);
	test_instance.mark_board(5);
	test_instance.mark_board(3);
	REQUIRE(test_instance.game_over() == true);
}
TEST_CASE("Test Win by thhe second row")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	test_instance.mark_board(4);
	test_instance.mark_board(2);
	test_instance.mark_board(5);
	test_instance.mark_board(1);
	test_instance.mark_board(6);
	REQUIRE(test_instance.game_over() == true);
}
TEST_CASE("Test Win by the third row")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	test_instance.mark_board(7);
	test_instance.mark_board(1);
	test_instance.mark_board(8);
	test_instance.mark_board(2);
	test_instance.mark_board(9);
	REQUIRE(test_instance.game_over() == true);
}
TEST_CASE("Test Win diagonlly from the top left")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	test_instance.mark_board(1);
	test_instance.mark_board(2);
	test_instance.mark_board(5);
	test_instance.mark_board(3);
	test_instance.mark_board(9);
	REQUIRE(test_instance.game_over() == true);
}
TEST_CASE("Test Win diagonlly from the bottom left")
{
	TicTacToe test_instance;
	test_instance.start_game("X");

	test_instance.mark_board(7);
	test_instance.mark_board(1);
	test_instance.mark_board(5);
	test_instance.mark_board(2);
	test_instance.mark_board(3);
	REQUIRE(test_instance.game_over() == true);
}

TEST_CASE("Verify that x wins, o wins, and ties works")
{
	TicTacToe test_instance;
	TicTacToeManager manager_instance;

	test_instance.start_game("X");

	test_instance.mark_board(7);
	test_instance.mark_board(1);
	test_instance.mark_board(5);
	test_instance.mark_board(2);
	test_instance.mark_board(3);
	REQUIRE(test_instance.game_over() == true);
	REQUIRE(test_instance.get_winner() == "X");

	manager_instance.save_game(test_instance);
	int o, x, t;
    manager_instance.get_winner_total(o, x, t);
    REQUIRE(o == 0);
    REQUIRE(x == 1);
    REQUIRE(t == 0);
	
	
	test_instance.start_game("O");

	test_instance.mark_board(1);
	test_instance.mark_board(2);
	test_instance.mark_board(5);
	test_instance.mark_board(3);
	test_instance.mark_board(9);
	REQUIRE(test_instance.game_over() == true);
	REQUIRE(test_instance.get_winner() == "O");
        
	manager_instance.save_game(test_instance);
	
	

    manager_instance.get_winner_total(o, x, t);
    REQUIRE(o == 1);
    REQUIRE(x == 1);
    REQUIRE(t == 0);

	
	test_instance.start_game("X");

	test_instance.mark_board(1);
	REQUIRE(test_instance.game_over() == false);
	test_instance.mark_board(2);
	REQUIRE(test_instance.game_over() == false);
	test_instance.mark_board(3);
	REQUIRE(test_instance.game_over() == false);
	test_instance.mark_board(4);
	REQUIRE(test_instance.game_over() == false);
	test_instance.mark_board(5);
	REQUIRE(test_instance.game_over() == false);
	test_instance.mark_board(7);
	REQUIRE(test_instance.game_over() == false);
	test_instance.mark_board(6);
	REQUIRE(test_instance.game_over() == false);
	test_instance.mark_board(9);
	REQUIRE(test_instance.game_over() == false);
	test_instance.mark_board(8);
	REQUIRE(test_instance.game_over() == true);
	REQUIRE(test_instance.get_winner() == "C");

    
	
    manager_instance.save_game(test_instance);
	
    manager_instance.get_winner_total(o, x, t);
    REQUIRE(o == 1);
    REQUIRE(x == 1);
    REQUIRE(t == 1);
