//h
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;


class TicTacToe
{
public: //Class TicTacToe Function/Data member
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    string get_winner();
private: //Class TicTacToe private functions
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board() const;
    string player;
    vector<string>pegs{9, " "}; //class member variable; initialize to 9 spaces
    string winner;

};







class Error
{
public: //Error Class function/data members
    Error(string msg) : message{ msg } {};
    std::string get_message();
private: //Error Private class data
    string message;
};





    




