#include"tic_tac_toe.h"

using std::cout;
using std::cin;


int main() 
{
    TicTacToe game;
    string choice = "Z";
    
    int position;
    do
    {
		string player;
		while (!(player == "X" || player == "O"))
		{
			try
			{
				cout << "Enter Starting Player (Choose X or O):";
				cin >> player;
				game.start_game(player);

			}
			catch (Error exc)
			{
				cout << exc.get_message();

			}
		}

   
    
    
    
    
    do
    {
        std::cout<<"Enter position (Chose a number 1-9)"<< game.get_player()<<":";
        cin>>position;
        cout<<"\n";
        
        try
        {
            game.mark_board(position);
           
            cout<<"\n";
        }
        catch (Error exc)
        {
            cout << exc.get_message();
        }
         game.display_board();
    }
    while (!(game.game_over()== true));
        cout << "The winner is:" << game.get_winner()<<"\n";
        cout << "Enter Q to quit:";
        cin >> choice;
       
     
    
    
	} while (!(choice == "Q"));
   
    return 0;
}
