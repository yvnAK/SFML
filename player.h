#ifndef player_H
#define player_H

#include <iostream>
#include "AnimatePlayerEntity.h" // Needs to be included to use AnimatePlayerEntity class - developed later
#include <vector> 

// Player class inherits from AnimatePlayerEntity class
class Player : public AnimatePlayerEntity {
    public:
    Player(float x, float y, int initialiseHealth, int intialSpeed); 
    virtual ~Player(); 
    void move(int directionX, int directionY); overide; // method to move the player

    // public method to add, store and drop an item to/from the player's inventory
    void pickUpItem(const Item& item); // picks up item
    void dropItem(const Item& item); // drops item
    std::vector<Item> getInventory() const; // returns the player's inventory

    // Accessor methods
    int getPlayerHealth() const; // gets players health
    void setHealth(int playerHealth); // sets players health

private:
    std::vector<Item> playerCollectedItems; // vector to store player's items in inventory
    int playerHealth; // player's health
  
};

#endif // player_H
