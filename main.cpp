#include <cstdio>
#include <cstdlib>
#include <list_of_teams.hpp>
#include <list_of_teams_hash1.hpp>
#include <list_of_teams_hash2.hpp>
#include <fstream>
#include <time.h>
#include <map>
#include <string>


int main(){
    for(size_t size = 1000; size < 1200; size = size * 2)
    {
        std::fstream in;

        std::string str = std::to_string(size);
        in.open("/home/user/Projects/build-generater-Desktop-Debug/input"+str);

        std::string a="",b="",d="";
        size_t c=0;
        size_t m = size + size % 2 + 1;



        team t0(a,b,c,d);

        list_of_teams_hash1 l1();
        list_of_teams_hash2 l2();

/*
        std::vector<size_t> collisions1;
        std::vector<size_t> collisions2;
        size_t index = 0;
        collisions1.push_back(0);
        collisions2.push_back(0);
        while(in >> a >> b >> c >> d){
            team t(a,b,c,d);
            t.hash() = l1.calculate_hash(t);
            if( (l1.list().at(t.hash()))==t0)
            {
                l1.list().at(t.hash()) = t;
            }else{
                collisions1.at(index)++;
                size_t j = t.hash()+1;
                for(j; j <= m-1; j ++){
                    if(l1.list().at(j)==t0){
                        l1.list().at(t.hash()) = t;
                        break;
                    }
                    if(j == m-1){
                        j = 0;
                    }
                }
            }

            t.hash()=l2.calculate_hash(t);
            if(l1.list().at(t.hash())==t0)
            {
                l1.list().at(t.hash()) = t;
            }else{
                collisions2.at(index)++;
                size_t j = t.hash()+1;
                for(j; j <= m-1; j ++){
                    if(l2.list().at(j)==t0){
                        l2.list().at(t.hash()) = t;
                        break;
                    }
                    if(j == m-1){
                        j = 0;
                    }
                }
            }

        }
        index++;
*/
    }

    return 0;
}


