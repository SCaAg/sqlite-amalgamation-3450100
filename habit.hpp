#pragma once
#include <iostream>

class Habit {
private:

    int done;
    int enable;
    string name;
    color color;

public:
    Habit();
    ~Habit();
    int SetHabit(int enable = -1, int done = -1, string name = "", color color = Transparent);
};

Habit::Habit()
{
    this->done = -1;
    this->enable = -1;
    this->name = "";
    this->color = Transparent;
}

int SetHabit()
{
    try
    {
        if(enable != -1)
            this->enable = enable;
        if(done != -1)
            this->done = done;
        if(name != "")
            this->name = name;
        if(color != Transparent)
            this->color = color;
        sql("INSERT INTO habits (name, color, done, enable) VALUES ('" + this->name + "', '" + this->color + "', " + this->done + ", " + this->enable + ");");
        return 0;
    }
    catch (const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        //return 1;
    }
    
}