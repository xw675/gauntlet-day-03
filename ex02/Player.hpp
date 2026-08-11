#pragma once

#include "Entity.hpp"

class Player : public Entity {
public:
    explicit Player(std::string name, int maxHp, int armor);
    std::string describe() const override;      // -> "Player <name>"
    void takeDamage(int amount) override;
private:
    int m_armor;
};