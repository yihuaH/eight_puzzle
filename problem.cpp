#include <math.h>
#include <string>
#include "problem.h"

problem::problem(){
    //if create a problem, set goal state first
    set_goal_state();

}

void problem::set_goal_state(){
    //set the goal state 1-9 
    int temp = 1;
    for (int i = 0; i < PUZZLE_LEVEL; i++)
    {
        for (int j = 0; j < PUZZLE_LEVEL; j++)
        {
            goal_state[i][j] = temp;
            temp++;
        }
        
    }

    //the last one is 0(blank/star)
    goal_state[PUZZLE_LEVEL-1][PUZZLE_LEVEL-1]=0;
}