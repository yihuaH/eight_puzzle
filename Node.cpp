#include "Node.hpp"

void Node::print_node(){
    printf("+-----+\n");
    for (int i = 0; i < PUZZLE_LEVEL; i++){
        printf(" ");
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
        printf("+-----+\n");
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

Node::Node()= default;

Node::Node(int state_p[PUZZLE_LEVEL][PUZZLE_LEVEL]){
    //copy state value;
    for (int i = 0; i < PUZZLE_LEVEL; i++)
    {
        for (int j = 0; j < PUZZLE_LEVEL; j++)
        {
            state[i][j] = state_p[i][j];            
        }
        
    }
    //find x, y
    find_x_y();
    set_operators();
    cost_x = g_x + h_x;
}

void Node::set_operators() {
    if(x != 0) {
        //up
        operators_for_node[0] = up;
    }else{
        operators_for_node[0] = none;
    }
    if(x != 2){
        //down
        operators_for_node[1] = down;
    }else{
        operators_for_node[1] = none;
    }
    if(y != 0){
        //left
        operators_for_node[2] = left;
    }else{
        operators_for_node[2] = none;
    }
    if(y != 2){
        //right
        operators_for_node[3] = right;
    }else{
        operators_for_node[3] = none;
    }
}
