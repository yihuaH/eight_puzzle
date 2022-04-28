#include "Node.hpp"
#ifndef PROBLEM_H
#define PROBLEM_H



class problem
{
public:
    Node* initial_state;
    Node* goal_state; 
    void set_goal_state();
    void set_initial_state();
    void welcome();
    problem();
};

#endif