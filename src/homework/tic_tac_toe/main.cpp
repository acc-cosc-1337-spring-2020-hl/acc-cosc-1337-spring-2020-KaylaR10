#include"tic_tac_toe.h"

using std::cout;
using std::cin;


int main() 
{
    TicTacToe game;
    string player;
    int position;
    
    cout<<"Enter Starting Player:";
    cin>>player;
    
    game.start_game(player);
    
    {
        std::cout<<"Enter postion player"<< game.get_player()<<":";
        cin>>position;
        cout<<"\n";
        
        game.mark_board(position);
        cout<<"\n";
    }

	return 0;
}
