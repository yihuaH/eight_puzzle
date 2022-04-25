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
    goal_state = new Node;
    //set the goal state 1-9 
    int temp = 1;
    for (int i = 0; i < PUZZLE_LEVEL; i++)
    {
        for (int j = 0; j < PUZZLE_LEVEL; j++)
        {
            goal_state->state[i][j] = temp;
            temp++;
        }
        
    }

    //the last one is 0(blank/star)
    goal_state->state[PUZZLE_LEVEL-1][PUZZLE_LEVEL-1]=0;
}

void problem::set_initial_state(){
    printf("Type\"1\" to use a default puzzle, or \"2\" wo enter you own Puzzle.\n");
    int choice;
    cin >> choice;
    if (choice==1)
    {
        printf("1.Trival\n2.Very Easy\n3.Easy\n4.Doable\n5.Oh Boy\n6.Impossible\n");
        cin >> choice;
        switch (choice)
        {
        case 1:
            {int a[PUZZLE_LEVEL][PUZZLE_LEVEL]={
                {1,2,3},
                {4,5,6},
                {7,8,0}};
            initial_state = new Node(a);
            initial_state->print_node();
            break;}
        case 2:
            {int a[PUZZLE_LEVEL][PUZZLE_LEVEL]={
                {1,2,3},
                {4,5,6},
                {7,0,8}};
            initial_state = new Node(a);
            initial_state->print_node();
            break;}
        case 3:
            {int a[PUZZLE_LEVEL][PUZZLE_LEVEL]={
                {1,2,0},
                {4,5,3},
                {7,8,6}};
            initial_state = new Node(a);
            initial_state->print_node();
            break;}
        case 4:
            {int a[PUZZLE_LEVEL][PUZZLE_LEVEL]={
                {0,1,2},
                {4,5,3},
                {7,8,6}};
            initial_state = new Node(a);
            initial_state->print_node();
            break;}
        case 5:
            {int a[PUZZLE_LEVEL][PUZZLE_LEVEL]={
                {8,7,1},
                {6,0,2},
                {5,4,3}};
            initial_state = new Node(a);
            initial_state->print_node();
            break;}
        case 6:
            {int a[PUZZLE_LEVEL][PUZZLE_LEVEL]={
                {1,2,3},
                {4,5,6},
                {8,7,0}};
            initial_state = new Node(a);
            initial_state->print_node();
            break;}
        default:
            break;
        }
    }else if(choice==2){
        int a[PUZZLE_LEVEL][PUZZLE_LEVEL];
        printf("Enter your puzzle, use a zero to represent the blank\n");
        for (int i = 0; i < PUZZLE_LEVEL; i++)
        {
            printf("Enter the %d row, use sapce or tabs between numbers\n", i+1);
            for (int j = 0; j < PUZZLE_LEVEL; j++)
            {
                cin >> a[i][j];
            }
            
        }
        initial_state = new Node(a);
        initial_state->print_node();
    }else{//reenter choice
        set_initial_state();
    }
    
}