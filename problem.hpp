#include "Node.hpp"
#ifndef PROBLEM_H
#define PROBLEM_H

enum opt {up, down, left, right};

class problem
{
public:
    Node* initial_state;
    Node* goal_state; 
    void set_goal_state();
    void set_initial_state();
    void welcome();
    opt operators;
    problem();
};


#endif