#pragma once

#include "Entity.hpp"

class Enemy : public Entity {
public:
    Enemy(std::string name, int hp);            // name AND hp, both required
    std::string describe() const override;      // -> "Enemy <name> (hp N)"
};