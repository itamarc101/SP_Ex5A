#pragma once

#include <iostream>
#include <vector>

namespace ariel
{
}

    class MagicalContainer 
    {
        private:
            std::vector<int> elements;
            std::vector<int> sortedE;

        public:
            void addElement(int elem);
            void removeElement(int elem);
            int size() const;

            MagicalContainer() {}

            class AscendingIterator
            {
                private:
                    MagicalContainer& container;
                    int index;
                public:
                    AscendingIterator(MagicalContainer& container): container(container), index(0) {}
                    AscendingIterator(AscendingIterator& other): container(other.container), index(other.index) {}
                    ~AscendingIterator() = default;

                    AscendingIterator& operator=(const AscendingIterator& other);
                    bool operator==(const AscendingIterator& other) const;
                    bool operator!=(const AscendingIterator& other) const;
                    bool operator<(const AscendingIterator& other) const;
                    bool operator>(const AscendingIterator& other) const;
                    int operator*();
                    AscendingIterator& operator++();

                    AscendingIterator begin();
                    AscendingIterator end();
            };

            class PrimeIterator
            {
                private:
                    MagicalContainer& container;
                    int index;
                    //bool isPrime(int num);

                public:
                    PrimeIterator(MagicalContainer& container): container(container), index(0) {}  
                    PrimeIterator(const PrimeIterator& other): container(other.container), index(other.index) {}
                    ~PrimeIterator() = default;

                    PrimeIterator begin();
                    PrimeIterator end();

                    PrimeIterator& operator=(const PrimeIterator& other);
                    bool operator==(const PrimeIterator& other) const;
                    bool operator!=(const PrimeIterator& other) const;
                    bool operator>(const PrimeIterator& other) const;
                    bool operator<(const PrimeIterator& other) const;
                    int operator*();
                    PrimeIterator& operator++();
            };

            class SideCrossIterator
            {
                private:
                    MagicalContainer& container;
                    int index;

                public:
                    SideCrossIterator(MagicalContainer& container): container(container), index(0) {} 
                    SideCrossIterator(const SideCrossIterator& other): container(other.container), index(other.index) {}
                    ~SideCrossIterator() = default;
                    SideCrossIterator begin();
                    SideCrossIterator end();

                    SideCrossIterator& operator=(const SideCrossIterator& other);
                    bool operator==(const SideCrossIterator& other) const;
                    bool operator!=(const SideCrossIterator& other) const;
                    bool operator>(const SideCrossIterator& other) const;
                    bool operator<(const SideCrossIterator& other) const;
                    int operator*();
                    SideCrossIterator& operator++();
                
                private:
                   //bool isPrime(int numb);
            };
    };