#ifndef LIST_OF_TEAMS_HPP
#define LIST_OF_TEAMS_HPP
#include "team.hpp"
#include <vector>
#include <iterator>

class list_of_teams
{
public:
    list_of_teams();
    ~list_of_teams();

    std::vector<team>& list()
    {
        return list_;
    }
    const std::vector<team>& list() const
    {
        return list_;
    }

    void shaker_sort();

    void heap_sort();

    int binsearch(const team& my_elem);

    int search(const team& m_elem);
private:
    void downHeap(int k, int n);

    std::vector<team> list_;

};


#endif // LIST_OF_TEAMS_HPP
