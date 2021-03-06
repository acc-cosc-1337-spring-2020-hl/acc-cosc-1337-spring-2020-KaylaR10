#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test can’t call mark board before start game")
{

    TicTacToe game;

    REQUIRE_THROWS_AS(game.mark_board(1), Error);

}

TEST_CASE("Test set first player to X")
{

    TicTacToe game;
    game.start_game("X");

    REQUIRE(game.get_player() == "X");

}

TEST_CASE("Test start game accepts only X or O")
{

    TicTacToe game;

    REQUIRE_THROWS_AS(game.start_game("Y"), Error);

}

TEST_CASE("Test set first player to O")
{

    TicTacToe game;
    game.start_game("O");

    REQUIRE(game.get_player() == "O");

}



TEST_CASE("Test win by first column")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by second column")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(1);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//X
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(1);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(6);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//X
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by first row")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(1);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//X
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by second row")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(6);//X
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by third row")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//X
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(1);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//X
    REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win diagonal from bottom left")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//X
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test for no winner")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(1);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//O
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//X
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//O
    REQUIRE(game.get_winner() == "C");
    REQUIRE(game.game_over() == true);

}


TEST_CASE("Test start game with X game flow")
{

    TicTacToe game;
    game.start_game("X");

    REQUIRE(game.get_player() == "X");

    game.mark_board(4);

    REQUIRE(game.get_player() == "O");

}

TEST_CASE("Test start game with O game flow")
{

    TicTacToe game;
    game.start_game("O");

    REQUIRE(game.get_player() == "O");

    game.mark_board(2);

    REQUIRE(game.get_player() == "X");

}

TEST_CASE("Test game over when board full")
{
    
}

