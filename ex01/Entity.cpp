#include <iostream>
#include "Entity.hpp"

Entity::Entity(std::string name) : m_name(std::move(name)) {
    std::cout << "+ Entity \t" << m_name << '\n';
}

Entity::~Entity() {
    std::cout << "- Entity \t" << m_name << '\n';
}
