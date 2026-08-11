#include <iostream>
#include <algorithm>
#include "Player.hpp"

Player::Player(std::string name, int maxHp, int armor) : Entity(std::move(name), maxHp), m_armor(armor) {}

std::string Player::describe() const {
    std::string s = "Player " + m_name + " (hp " + std::to_string(currentHp()) + "/" + std::to_string(maxHp()) + ", armor " + std::to_string(m_armor) + ")";
    if (!isAlive())
        s += " [dead]";
    return s;
}

void Player::takeDamage(int amount){
    int reduced = std::max(1, amount - m_armor);
    std::cout << m_name << "'s armor soaks " << (amount - reduced) << '\n';
    Entity::takeDamage(reduced);   // delegate: base applies the hit and logs it
}