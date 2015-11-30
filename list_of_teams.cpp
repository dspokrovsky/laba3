#include "list_of_teams.hpp"

using namespace std;
/*
 * std::vector<team::team> k_(m);
 */




//бинарный поиск элемента
int list_of_teams::binsearch(const team &my_elem){
    size_t l = 0;
    size_t u = list().size()-1;

    while(l <=u){
        int m = (l+u)/2;
        if(list().at(m) == my_elem) return m;
        if(list().at(m)<my_elem) l= m + 1;
        if(list().at(m)>my_elem) u = m -1;
    }
    return -1;
}
//линейный поиск элемента
int list_of_teams::search(const team& my_elem){
    for(auto i = list().begin(); i != list().end(); i ++){
        if (*i == my_elem) return i - list().begin();
    }
    return -1;
}

//сортировка Шейкером
void list_of_teams::shaker_sort()
{
    auto left_i = list().begin();
    auto right_i = list().end()-1;
    while(left_i < right_i){
        for(auto i = left_i; i != right_i;i++){
            if (*(i+1) < *i){
                swap(*i,*(i+1));
            }
        }
        right_i--;
        for(auto i = right_i; i != left_i;i--){
            if (*(i+1) < *i){
                swap(*i,*(i+1));
            }
        }
        left_i++;
    }
}

//Вспомогательная функция для Пирамидальной сортировки,
//которая
void list_of_teams::downHeap(int k, int n){
    team new_elem(list().at(k));
    int child;
    while(k<=n/2){
        child = 2*k;
        if ( child < n && list().at(child) < list().at(child+1)){
            child++;
        }
        if (new_elem >= list().at(child)){
            break;
        }
        swap(list().at(k), list().at(child));
        k = child;
    }
}
//Пирамидальная сортировка
void list_of_teams::heap_sort()
{
    size_t size = list().size();
    for (int i = size/2 -1; i >=0; i--){
        downHeap(i,size-1);
    }
    for (int i = size-1;i >0; i--){
        swap(list().at(i),list().at(0));
        downHeap(0,i-1);
    }
}

//хеш доступ
