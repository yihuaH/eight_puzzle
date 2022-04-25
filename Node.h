#include <string>
using namespace std;

#ifndef NODE_H
#define NODE_H
#define PUZZLE_LEVEL 3

struct Node
{
    Node* parent;

    //create state
    int state[PUZZLE_LEVEL][PUZZLE_LEVEL];
    //*(blank) coordinate
    int x, y;
    //c(x) = g(x) + h(x)
    int cost_x;
    // g(x)
    int g_x;
    // h(x)
    int h_x;
    //print node
    void print_node(){
        for (int i = 0; i < PUZZLE_LEVEL; i++)
        {
            for (int j = 0; j < PUZZLE_LEVEL; j++)
            {
                printf("%d ", state[i][j]);
            }
            printf("\n");
        }
        
    }
};

#endif