#include "MagicalContainer.hpp"
#include <vector>
#include <stdexcept>
using namespace ariel;

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other)
{
    if(this != &other)
    {
        container = other.container;
        index = other.index;
    }
    return *this;
}

bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const
{
    return index == other.index;
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const
{
    return index != other.index;
}

bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const
{
    return index < other.index;
}

bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const
{
    return index > other.index;
}

int MagicalContainer::AscendingIterator::operator*()
{
    return index;
}

MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++()
{
    ++index;
    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{
    return AscendingIterator(*this);
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    index = container.elements.size();
    return *this;
}
