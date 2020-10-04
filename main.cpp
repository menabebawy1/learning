#include <iostream>
#include "basketball_player.hpp" //you only beed to include the hpp of the derived class in the main file

int main(){
    std::cout << "Player 1: " << std::endl;
    std::cout << std::endl;

    Player myplayer("Peter Parker", "Spurs", 0);
    std::cout << "Your player level is: " << myplayer.getLEVEL() << std::endl;
    std::cout << "Your player name is: " << myplayer.getNAME() << std::endl;
    std::cout << "Your player number is: " << myplayer.getNUM() << std::endl;
    myplayer.run(1000);
    myplayer.score(2000);
    std::cout << "Your player level is: " << myplayer.getLEVEL() << std::endl;
    myplayer.run(10000);
    myplayer.summary();
    std::cout << std::endl;

    std::cout << "Player 2: " << std::endl;
    std::cout << std::endl;

    Player myplayer2("BOB", "Warriors", 100);
    std::cout << "Your player level is: " << myplayer2.getLEVEL() << std::endl;
    std::cout << "Your player fitness level is: " << myplayer2.getFITNESS() << std::endl;
    std::cout << "Your player ppg is: " << myplayer2.getPPG() << std::endl;
    myplayer2.run(50);
    myplayer2.run(50);
    myplayer2.score(15000);
    myplayer2.run(50);
    myplayer2.score(15000);
    myplayer2.run(50);
    std::cout << "Your player level is: " << myplayer2.getLEVEL() << std::endl;
    std::cout << "Your player fitness level is: " << myplayer2.getFITNESS() << std::endl;
    std::cout << "Your player ppg is: " << myplayer2.getPPG() << std::endl;
    myplayer2.summary();

}