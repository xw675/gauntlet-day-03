#pragma once

#include "Entity.hpp"

class Player : public Entity {
public:
    explicit Player(std::string name);          // name only: players have no hp here
    ~Player();                                  // implicitly virtual (base dtor is virtual)
    std::string describe() const override;      // -> "Player <name>"
};