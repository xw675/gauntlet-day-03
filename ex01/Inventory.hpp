#pragma once

#include <string>
#include <initializer_list>

class Inventory {
public:
    Inventory(const std::string& owner, std::initializer_list<std::string> items);
    ~Inventory();                                      // delete[] here, prints '-'

    Inventory(const Inventory&)            = delete;   // owns a raw buffer:
    Inventory& operator=(const Inventory&) = delete;   //   forbid copies (no double free)
private:
    std::string  m_owner;
    std::size_t  m_count;
    std::string* m_items;   // new std::string[m_count] of item names, freed in ~Inventory

    std::string itemList() const;   // "(dagger, gold, torch)" for the trace lines
};
