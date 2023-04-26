#include <iostream>

#ifndef UNTITLED7_GRIDMAP_H
#define UNTITLED7_GRIDMAP_H
template<typename T>
class GridMap {
private:
    int width_,height_;
    std::vector<T>board_;
    std::string width, height, def_value;
public:
    GridMap(int width, int height, T def_value=T())
        :height_ (height)
          ,width_ (width)
          ,board_(height * width, def_value)
    {

    }
    std::string toString() const{
        return GridMap(width, height, def_value);
    }
};
/*int position(int x, int y){
        return (y-1)* height_ +(x-1); //gives position on the board from 0-24
    }*/
#endif //UNTITLED7_GRIDMAP_H

