#include <queue>
#include "Node.hpp"
#ifndef PROBLEM_H
#define PROBLEM_H

//learn from https://stackoverflow.com/questions/15646780/priority-queue-of-nodes
struct compare_node{
    bool operator()(Node * a, Node * b){
        return a->cost_x > b->cost_x;
    }
};

class problem
{
public:
    Node* initial_state;
    Node* goal_state;
    int total_nodes = 0;
    int maximum_nodes_in_queue = 0;
    int depth = 0;
    void set_goal_state();
    void set_initial_state();
    static void welcome();
    void Uniform_cost_search();
    static bool compare_node_value(Node* a, Node* b);
    void path_print(Node* temp);
    void misplace_tile_heuristic();
    int h_n_misplace_tile(Node* a, Node* b);
    problem();
};

#endif