#include "Enemy.hpp"

Enemy::Enemy(std::string name, int hp, std::initializer_list<std::string> loot)
    : Entity(std::move(name)), m_hp(hp), m_bag(m_name, loot) {}

Enemy::~Enemy() = default;

std::string Enemy::describe() const {
    return "Enemy " + m_name + " (hp " + std::to_string(m_hp) + ")";
}