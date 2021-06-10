#include<string.h>
#include<iostream>
#include"PlayerClass.h"
#include"timer.h"
using namespace std;
class GameFunctions
{
private:
  char board[3][3];
public:
   int flag;
   int position;
   void playgame(PlayerClass player1,PlayerClass player2);
   void printTable(char playername[50]);
   void setTable(int x,char playerchar);
   int  Winner();
   void viewscore();
   int  timingAndRetrievingData(int seconds);
   void *getUserInput(void * userdetails);
};
//set table
void GameFunctions:: setTable(int x,char playerchar){
  int n=1;
  for (int  i = 0; i < 3; i++)
  {
   for (int j = 0; i < 3; j++)
   {
     if (n==x)
     {
       this->board[i][j]=playerchar;
     }
      n++;
   }
   
  }
}
//print table
void GameFunctions::printTable(char playername[50]){
  cout<<"Player Name: "<<playername<<"\n";
for (int  j = 0; j < 3; j++)
{
  cout<<"|";
for (int x = 0; x < 3; x++)
{
   cout<<board[j][x]<<"|";
}
cout<<"\n";
}

};

//winner
int GameFunctions::Winner(){
  int gameover=0;
  for (int i = 0; i < 3; i++)
  {
    if (this->board[i][0]==this->board[i][1]&&this->board[i][1]==this->board[i][2])
    {
      gameover=1;
    }
    
  }
  for (int i = 0; i < 3; i++)
  {
    if (this->board[0][i]==this->board[1][i]&&this->board[1][i]==this->board[2][i])
    {
      gameover=1;
    }
  }
  if (this->board[0][2]==this->board[1][1]&&this->board[1][1]==this->board[2][0])
  {
    gameover=1;
  }
if (this->board[0][0]==this->board[1][1]&&this->board[1][1]==this->board[2][2])
{
 gameover=1;
}

return gameover;
}
// Prompting for user character.
void * GameFunctions:: getUserInput(void*position ){
  if (cin>>position)
  {
    flag=1;
  }
  
}
//timing and retrieving data
int GameFunctions::timingAndRetrievingData(int seconds){
  pthread_t thread1;
  pthread_t thread2;
  int counter;
  timer stopwatch=timer();
  stopwatch.seconds=seconds;
   while (counter<=10&&flag!=1)
  {
      if (counter==10){
         return 0;
      }
      
  }
}
//playgame
 void GameFunctions::playgame(PlayerClass player1,PlayerClass player2){
int counter=0;
int position;

}




