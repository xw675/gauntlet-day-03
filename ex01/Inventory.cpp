#include <iostream>
#include "Inventory.hpp"

Inventory::Inventory(const std::string& owner, std::initializer_list<std::string> items)
    : m_owner(owner), m_count(items.size()), m_items(new std::string[m_count]) {
    std::size_t i = 0;
    for (const auto& item : items) {
        m_items[i++] = item;
    }
}

Inventory::~Inventory() {
    delete[] m_items;
    std::cout << "Inventory of " << m_owner << " destroyed\n";
}