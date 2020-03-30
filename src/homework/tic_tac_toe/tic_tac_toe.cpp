//cpp
#include "tic_tac_toe.h"



bool TicTacToe::game_over()
{
    return check_board_full();
    
}

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
    
    return clear_board();

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
    else
     {
         pegs[position - 1] = player;
         set_next_player();
     }
}
//Iterate vector of string pegs to display a tic tac toe board in 3X3 format
void TicTacToe::display_board() const
{
    string out = "";
    for (int i = 0; i < 9; i++)
    {
        if (i % 3 != 0)
        {
            out +=" | ";
            
        }
        else if (i/3>0)
        {
            out +="    ";
            
        }
        out += pegs[i];
    }
    std::cout << out;
}

//return false if vector of strings pegs has available slot by checking for a space in each element. Otherwise return true

bool TicTacToe::check_board_full()
{
    for (auto i : pegs)
    {
        if (i == " ")
        {
            return false;
        }
    }
    return true;
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
//set all 9 elements to a space
void TicTacToe::clear_board() const
{
    for (auto i : pegs)
    {
        i = "";
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
