#include<iostream>
#include<cstring>
#include"timer.h"

class PlayerClass
{
private:
    char playerchar;
    char playername[50];
    int score;
public:
    int seconds; 
    PlayerClass(char playername[50],char playerchar);
    void setScore(int x);
    char * getPlayername();
    char getCharacter();
    void setSeconds(int seconds);
    int getSeconds();
};

PlayerClass::PlayerClass(char playernamer[50],char playerchar) 
{
    this->playerchar=playerchar;
    strcpy(this->playername,playername);
}
char PlayerClass::getCharacter(){
    return this->playerchar;
}
void PlayerClass::setScore(int x){
    this->score = score+x;
}
char * PlayerClass::getPlayername(){
    return this->playername;
}
void PlayerClass::setSeconds(int seconds){
    this->seconds=seconds;
}
int PlayerClass::getSeconds(){
    return seconds;
}
