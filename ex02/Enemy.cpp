#include "Enemy.hpp"

Enemy::Enemy(std::string name, int hp) : Entity(std::move(name), hp) {}

std::string Enemy::describe() const {
    std::string s = "Enemy " + m_name + " (hp " + std::to_string(currentHp()) + "/" + std::to_string(maxHp()) + ")";
    if (!isAlive())
        s += " [dead]";
    return s;
}    
