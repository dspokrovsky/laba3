#ifndef LIST_OF_TEAMS_HPP
#define LIST_OF_TEAMS_HPP
#include "team.hpp"
#include <vector>
#include <iterator>
#include <string>
#include <array>
class list_of_teams
{
public:
    /*
    list_of_teams(size_t& k5);
    virtual ~list_of_teams();
*/
    list_of_teams(size_t& k5)
        :m_(k5)
    {
        std::vector<team::team> list_(k5);
    }

    virtual ~list_of_teams()
    {
    }

    std::vector<team>& list()
    {
        return list_;
    }
    const std::vector<team>& list() const
    {
        return list_;
    }

    const size_t& m() const
    {
        return m_;
    }

    size_t& m()
    {
        return m_;
    }


    void shaker_sort();

    void heap_sort();

    int binsearch(const team& my_elem);

    int search(const team& m_elem);

    virtual size_t calculate_hash(const team& dt);
/*
    size_t calculate_hash1(team& dt)
    {
        size_t h =0;
        for(size_t i =0; i < dt.name().size(); i ++){
            h += dt.name()[i] << i;
        }
        return h%(m()-1);
    }

    size_t calculate_hash2(team& dt)
    {
        size_t h =0;
        for(size_t i =0; i < dt.name().size(); i ++){
            h += dt.name()[i] << i;
        }
        return h%(m()-1);
    }
    */
    bool hashSearch(const team &dt){
        if (size_t h =list().at(calculate_hash(dt)) == dt){
            return true;
        }
        else{
            try{
                for(size_t i = h; i < m(); i++){
                    if(list().at(h)==dt){
                        return true;
                    }
                    if (i == m()-1){
                        throw(m());
                    }
                }
            }
            catch(size_t l){
                for(size_t i =0; i < l; i ++){
                    if(list().at(h)==dt){
                        return true;
                    }
                }
                return false;

            }
        }
    return false;
    }

private:

    void downHeap(int k, int n);

    size_t m_;

    std::vector<team> list_;


};


#endif // LIST_OF_TEAMS_HPP
