#include "initialize_random_array.h"

/*
 * Standard values: 
 * min = 0
 * max = 100
 */
std::vector<int> initialize_random_array(size_t size, int min, int max)
{
    std::vector<int> vect;
    vect.reserve(size);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(min, max);

    for(size_t i{0}; i < size; i++)
    {
        vect.push_back(dist(gen));
    }

    return vect;
}
/*
 * Standard values: 
 * min = 0
 * max = 100
 */
std::vector<int> initialize_random_vector(size_t s, int min, int max)
{
    return initialize_random_array(s, min, max);
}