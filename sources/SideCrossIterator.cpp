#include "MagicalContainer.hpp"
using namespace ariel;

MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other)
{
    if(this != &other)
    {
        container = other.container;
        index = other.index;
    }
    return *this;
}

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const
{
    return index == other.index;
}

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const
{
    return index != other.index;
}

bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const
{
    //if(&container != &other.container) throw std::runtime_error("Cant comape from different containers");
    return index < other.index;
}

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const
{
    //if(&container != &other.container) throw std::runtime_error("Cant comape from different containers");
    return index > other.index;
}

int MagicalContainer::SideCrossIterator::operator*()
{
    return index;
}

MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++()
{
    ++index;
    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return SideCrossIterator(*this);
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    index = container.elements.size();
    return *this;
}
