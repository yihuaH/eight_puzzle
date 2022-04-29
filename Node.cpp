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

Node::Node(){
    parent = nullptr;
    x = 2;
    y = 2;
}

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
        operators_for_node[0] = go_up;
    }else{
        operators_for_node[0] = go_none;
    }
    if(x != 2){
        //down
        operators_for_node[1] = go_down;
    }else{
        operators_for_node[1] = go_none;
    }
    if(y != 0){
        //left
        operators_for_node[2] = go_left;
    }else{
        operators_for_node[2] = go_none;
    }
    if(y != 2){
        //right
        operators_for_node[3] = go_right;
    }else{
        operators_for_node[3] = go_none;
    }
}

Node::Node(int state_p[PUZZLE_LEVEL][PUZZLE_LEVEL], operators_for_puzzle opt, Node *parent_p) {
    parent = parent_p;
    for (int i = 0; i < PUZZLE_LEVEL; i++)
    {
        for (int j = 0; j < PUZZLE_LEVEL; j++)
        {
            state[i][j] = state_p[i][j];
        }

    }
    g_x = parent_p->g_x+1;

    switch (opt) {
        case go_up:
            x = parent_p->x-1;
            y = parent_p->y;
            break;
        case go_down:
            x = parent_p->x+1;
            y = parent_p->y;
            break;
        case go_left:
            x = parent_p->x;
            y = parent_p->y-1;
            break;
        case go_right:
            x = parent_p->x;
            y = parent_p->y+1;
            break;
        default:
            find_x_y();
            break;
    }

    //move zero
    state[parent_p->x][parent_p->y] = state[x][y];
    state[x][y] = 0;

    set_operators();
    cost_x = g_x + h_x;
}
