#include "MagicalContainer.hpp"

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other)
{
    if(this != &other)
    {
        container = other.container;
        index = other.index;
    }
    return *this;
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const
{
    return index == other.index;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const
{
    return index != other.index;
}

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const
{
    //if(&container != &other.container) throw std::runtime_error("Cant comape from different containers");
    return index < other.index;
}

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const
{
    //if(&container != &other.container) throw std::runtime_error("Cant comape from different containers");
    return index > other.index;
}

int MagicalContainer::PrimeIterator::operator*()
{
    return index;
}

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++()
{
    ++index;
    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return PrimeIterator(*this);
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    index = container.elements.size();
    return *this;
}
