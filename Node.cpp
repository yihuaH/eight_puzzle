#include "Node.hpp"

void Node::print_node(){
    for (int i = 0; i < PUZZLE_LEVEL; i++){
        for (int j = 0; j < PUZZLE_LEVEL; j++){
                if (state[i][j]==0)
                {
                    printf("* ");
                    continue;
                }
                printf("%d ", state[i][j]);
            }
            printf("\n");
        }
}

void Node::find_x_y(){
    for (int i = 0; i < PUZZLE_LEVEL; i++)
    {
        for (int j = 0; j < PUZZLE_LEVEL; j++)
        {
            if (state[i][j]==0)
            {
                x = i;
                y = j;
                return;
            }
            
        }
        
    }
    
}