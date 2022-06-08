#include <iostream>
// #define struct class 
// class is a type
struct Player
{
    // class defaut is private, but Struct defaut is public
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

void Move(Player &player, int xa, int ya)
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}

int main()
{
    Player player;
    // player.x = 5; //cannot create a private var
    Move(player, 5, 5);
    player.Move(5, 5);
}