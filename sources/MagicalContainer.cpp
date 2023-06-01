#include "MagicalContainer.hpp"

void MagicalContainer::addElement(int elem)
{
    this->elements.emplace_back(elem);
    auto it = std::lower_bound(sortedE.begin(), sortedE.end(), elem);
    sortedE.insert(it, elem);
}

void MagicalContainer::removeElement(int elem)
{

}

int MagicalContainer::size() const{
    return elements.size();
}