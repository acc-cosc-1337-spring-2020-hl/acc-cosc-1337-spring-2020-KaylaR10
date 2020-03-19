//cpp
#include "tic_tac_toe.h"



//first_player function argument value must be X or O; otherwise throw
//an Error exception when value is not X or O.
void TicTacToe::start_game(string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
        throw Error("Player must be X or O."); //Error message
    }
    else
    {
        player = first_player; // in function set player (private variable) to first_player function argument
    }

}
//value of int must be in the range 1 to 9; otherwise throw and Error exception if value not in this range.
void TicTacToe::mark_board(int position)
{
    if (position >= 1 || position <= 9)
    {
        throw Error("Position must be 1 to 9."); //Error message
    }
    else if (player == "") // Private data player can't be empty; throw and Error exception if player variable is ""
    {
        throw Error("Game must start first.");//Error message
    }
}



// If private variable player X, player is O else player is X
void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else if (player == "O")
    {
        player = "X";
    }
}


//Return the next_player value
string TicTacToe::get_player() const
{
    return player;
}

// Error Class
string Error::get_message()
{
    return message;
}
