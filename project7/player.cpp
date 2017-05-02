#include "player.h"

void Player::setName( string name )
{
   playerName = name;
}

string Player::getName()
{
   return playerName;
}

void Player::printName()
{
   cout << endl << "Player Name: " << playerName << endl;
}

void Player::printOverview()
{
   cout << endl 
        << "Player Overview" << endl
        << "---------------" << endl
        << "Games Won: " << all.getGamesWon() << endl
        << "Win Rate: " << all.getWinRate() << endl
        << "Games Played: " << all.getGamesPlayed() << endl
        << "Fastest Win: " << all.getFastestWin() << endl
        << "Fewest Moves: " << all.getFewestMoves() << endl
        << "Top Score: " << all.getTopScore() << endl
        << endl;
}

void Player::printAllInfo()
{
   printName();
   printOverview();
}