#ifndef LIST_OF_TEAMS_HPP
#define LIST_OF_TEAMS_HPP
#include "team.hpp"
#include <iterator>
#include <string>
#include <map>


class list_of_teams
{
public:

    // доступ к элементам
    std::multimap<size_t, team>& list()
    {
        return list_;
    }
    const std::multimap<size_t, team>& list() const
    {
        return list_;
    }



    virtual size_t calculate_hash(const team& dt);

    team& hashSearch(const team &dt){
        auto range = list().equal_range(dt.hash());

        for(auto it = range.first; it != range.second; ++it){
            if( dt == it->second()) ;
        }



    }

private:


    std::multimap<size_t, team> list_;


};


#endif // LIST_OF_TEAMS_HPP
