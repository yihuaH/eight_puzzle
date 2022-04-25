#include "Node.h"
#ifndef PROBLEM_H
#define PROBLEM_H

enum opt {up, down, left, right};

class problem
{
public:
    char initial_state [PUZZLE_LEVEL][PUZZLE_LEVEL];
    char goal_state [PUZZLE_LEVEL][PUZZLE_LEVEL]; 
    void set_goal_state();
    opt operators;
    problem( );
    ~problem();
};


#endif