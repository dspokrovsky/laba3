#ifndef TEAM_HPP
#define TEAM_HPP
#include <string>
#include <boost/operators.hpp>
#include <iostream>



class team : public boost::totally_ordered1<team>
{
public:
    team(std::string& a,std::string& b,size_t& c,std::string& d)
        :name_(a),town_(b),points_(c),trainer_(d), hash_(0)
    {
    }
    team()
    {
    }

    // Доступ к элементам класса

    std::string& name()
    {
        return name_;
    }

    const std::string& name() const
    {
        return name_;
    }

    std::string& town()
    {
        return town_;
    }

    const std::string& town() const
    {
        return town_;
    }

    size_t& points()
    {
        return points_;
    }
    const size_t& points() const
    {
        return points_;
    }

    std::string& trainer()
    {
        return trainer_;
    }

    const std::string& trainer() const
    {
        return trainer_;
    }

    // Сравнения.

    bool operator==(const team& other) const
    {
        return (name_== other.name_)&&(points_==other.points_);
    }

    bool operator<(const team& other) const
    {
        return (points_<other.points_) or ((name_>other.name_)&&(points_==other.points_));
    }

    const size_t& hash() const
    {
        return hash_;
    }

    size_t& hash()
    {
        return hash_;
    }


    //Вывод

    friend std::ostream& operator<<(std::ostream& os, const team& dt){
        os << dt.points() << " " << dt.name() << " " << dt.trainer() << " " << dt.town();
        return os;
    }



private:


    std::string name_;

    std::string town_;

    size_t points_;

    std::string trainer_;
    
    size_t hash_;

};

#endif // TEAM_HPP

