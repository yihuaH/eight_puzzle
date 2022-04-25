#include <iostream>
#include "problem.hpp"
#include "Node.hpp"
using namespace std;

problem::problem(){
    welcome();
    //if create a problem, set goal state 
    set_goal_state();

}

void problem::welcome(){
    printf("Welcome to 862153428 %d puzzle solver\n", PUZZLE_LEVEL*PUZZLE_LEVEL-1);
}

void problem::set_goal_state(){
    //set the goal state 1-9 
    int temp = 1;
    for (int i = 0; i < PUZZLE_LEVEL; i++)
    {
        for (int j = 0; j < PUZZLE_LEVEL; j++)
        {
            goal_state.state[i][j] = temp;
            temp++;
        }
        
    }

    //the last one is 0(blank/star)
    goal_state.state[PUZZLE_LEVEL-1][PUZZLE_LEVEL-1]=0;
}

void problem::set_initial_state(){
    printf("Type\"1\" to use a default puzzle, or \"2\" wo enter you own Puzzle.\n");
    int choice;
    cin >> choice;
    if (choice==1)
    {
        
    }else if(choice==2){

    }else{//reenter choice
        set_initial_state();
    }
    
}