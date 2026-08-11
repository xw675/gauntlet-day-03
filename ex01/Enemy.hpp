#pragma once

#include "Entity.hpp"
#include "Inventory.hpp"

class Enemy : public Entity {
public:
    Enemy(std::string name, int hp, std::initializer_list<std::string> loot);
    ~Enemy();                          // implicitly virtual (base dtor is virtual)
    std::string describe() const override;      // -> "Enemy <name> (hp N)"
private:
    int       m_hp;
    Inventory m_bag;
};