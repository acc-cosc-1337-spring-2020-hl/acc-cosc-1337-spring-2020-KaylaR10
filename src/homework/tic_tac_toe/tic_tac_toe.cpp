//cpp
#include "tic_tac_toe.h"

/* 1) update class function to determine a win by checking for row win or column win or diagonal win. check board full indicates a tie occurs only if  X or O didn’t win. If no winner by row, column, or diagonal set winner to C. return false-if no winner n board not full */

bool TicTacToe::game_over()
{
    if(check_row_win() == true)
    {
        return true;
    }
    else if(check_column_win() == true)
    {
        return true;
    }
    else if(check_diagonal_win() == true)
    {
        return true;
    }
    else if(check_board_full() == true)
    {
       
        return true;
    }
    else if(check_board_full() && check_diagonal_win() && check_row_win() != true)
    {
        winner ="C";
    }
    else if( winner == "C" && check_board_full() != true)
    {
        return false;
    }
    
}

//first_player function argument value must be X or O; otherwise throw
//an Error exception when value is not X or O.
void TicTacToe::start_game(string first_player)
{
    if (!(first_player == "X" || first_player == "O"))
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

//A column wins with marked values 1,4,7 or 2,5,8, or 3,6,9 with all Os or Xs  (Remember a vector index starts at 0)
bool TicTacToe::check_column_win()
{
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        return true;
    }
    else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        return true;
    }
    else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
      {
          return true;
      }
    else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        return true;
    }
    else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        return true;
    }
    else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
      {
          return true;
      }
    else
    {
        return false;
    }
  
}

//A row wins with marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
bool TicTacToe::check_row_win()
{
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        return true;
    }
    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        return true;
    }
    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        return true;
    }
    else if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        return true;
    }
    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        return true;
    }
    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}
//A diagonal wins with marked values 1,5,9 or 7,5,3 with all Os or Xs
bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
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
    else
    {
        return false;
    }
}

//If player is X set winner to O otherwise set winner to X
void TicTacToe::set_winner()
{
    if(player == "X")
    {
        player = "O";
    }
    else if(player == "O")
    {
        player = "X";
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

string TicTacToe::get_winner()
{
    return winner;
}

// Error Class
string Error::get_message()
{
    return message;
}
