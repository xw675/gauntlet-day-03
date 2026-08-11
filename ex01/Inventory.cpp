#include <iostream>
#include "Inventory.hpp"

Inventory::Inventory(const std::string& owner, std::initializer_list<std::string> items)
    : m_owner(owner), m_count(items.size()), m_items(new std::string[m_count]) {
    std::size_t i = 0;
    for (const auto& item : items) {
        m_items[i++] = item;
    }
    std::cout << "+ Inventory \t" << m_owner << ' ' << itemList() << '\n';
}

Inventory::~Inventory() {
    std::cout << "- Inventory \t" << m_owner << ' ' << itemList() << '\n';   // read before the free
    delete[] m_items;
}

std::string Inventory::itemList() const {
    std::string s = "(";
    for (std::size_t i = 0; i < m_count; ++i) {
        if (i > 0)
            s += ", ";
        s += m_items[i];
    }
    return s + ")";
}
