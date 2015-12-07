#ifndef LIST_OF_TEAMS_HASH2_HPP
#define LIST_OF_TEAMS_HASH2_HPP
#include <list_of_teams.hpp>

class list_of_teams_hash2 : public list_of_teams
{
public:
    list_of_teams_hash2():list_of_teams(){

    }
    ~list_of_teams_hash2(){
    }


    size_t calculate_hash(const team& dt) override
    {
        size_t h =0;
        size_t m = 5465;
        for(size_t i =0; i < dt.name().size(); i ++){
            h += dt.name()[i] << i;
        }
        return h%(m-1);
    }
};

#endif // LIST_OF_TEAMS_HASH2_HPP
