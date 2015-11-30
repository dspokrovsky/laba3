#ifndef LIST_OF_TEAMS_HASH1_HPP
#define LIST_OF_TEAMS_HASH1_HPP
#include <list_of_teams.hpp>

class list_of_teams_hash1 : public list_of_teams
{
public:

    list_of_teams_hash1(size_t& m)
        :list_of_teams(m)
    {
    }

    ~list_of_teams_hash1() override
    {
        list_of_teams::~list_of_teams();
    }

    size_t calculate_hash(const team& dt) override
    {
        size_t h =0;
        for(size_t i =0; i < dt.name().size(); i ++){
            h += dt.name()[i] << i;
        }
        return h%(m()-1);
    }
};

#endif // LIST_OF_TEAMS_HASH1_HPP
