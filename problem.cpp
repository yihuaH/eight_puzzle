#include <math.h>
#include "problem.h"

problem::problem(){
    
}

void problem::set_goal_state(){
    char temp = '1';
    for (size_t i = 0; i < PUZZLE_LEVEL; i++)
    {
        for (size_t j = 0; j < PUZZLE_LEVEL; j++)
        {
            goal_state[i][j] = temp;
            temp++;
        }
        
    }
    goal_state[PUZZLE_LEVEL-1][PUZZLE_LEVEL-1]='*';
}