#include <iostream>
#include <string>
using namespace std;
 
class TicTacToe{
private: 
	char board[3][3];
public:
	TicTacToe() { }
	void setTable(){
		int n = 1;
		for(int x = 0; x < 3; x++){
			for(int y = 0; y < 3; y++){
				board[x][y] = '0' + n;
				n++;
			}
		}
	}
	void printTable(){
		for(int x = 0; x < 3; x++){
			for(int y = 0; y < 3; y++)
				if(y < 2) { cout << board[x][y] << "|"; }
				else { cout << board[x][y] << endl; }
			if(x < 2) { cout << "-+-+-\n"; }
		}
	}
	void playerMove(char num, char player){
		bool wrongMove = true;//wrong move
		for(int x = 0; x < 3; x++){
			for(int y = 0; y < 3; y++)
			{
				if(board[x][y] == num){
                board[x][y] = player; wrongMove = false;
                }
			}
		}
		if(wrongMove == true) { cout << "Wrong move!\n"; }
	}
	bool checkWinner(char player, bool gameOver)
	{
		for(int x = 0; x < 3; x++)
			if(board[x][0] == board[x][1] && board[x][1] == board[x][2]) gameOver = true;
		for(int x = 0; x < 3; x++)
			if(board[0][x] == board[1][x] && board[1][x] == board[2][x]) gameOver = true;
		if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) gameOver = true;
		if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) gameOver = true;
		if(gameOver == true) 
		{
			cout << "Player " << player << " wins!\n\n";
		}
		return gameOver;
	}
	bool checkDraw(bool gameOver)
	{
		int n = 1, count = 0;
		for(int x = 0; x < 3; x++)
		{
			for(int y = 0; y < 3; y++)
			{
				if(board[x][y] == '0'+n) { count++; }
				n++;
			}
		}
		if(count < 1) { cout << "It's a draw!\n\n"; gameOver = true; }
		return gameOver;
	}
};
 
int main()
{
	bool done = false, gameOver = false;
	char player = 'O', num;
	TicTacToe myGame;
	myGame.setTable();
	do
	{
		if(player == 'X') { player = 'O'; }
        
		else { player = 'X'; } 
		myGame.printTable();
		cout << "Player \"" << player << "\" turn or (q) to quit> ";
		cin >> num; 
		cout << "\n";
		if(num == 'q') { cout << "Goodbye!...\n"; break; }
		myGame.playerMove(num, player);
		gameOver = myGame.checkWinner(player, gameOver);
		gameOver = myGame.checkDraw(gameOver);
		if(gameOver == true) 
		{	myGame.setTable(); 
			gameOver = false; 
		}
	}while(!done);
 
	system("pause");
	return 0;
}