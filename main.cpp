#include <iostream>

#include "Node.hpp"
#include "problem.hpp"
using namespace std;

int main() {
    char choice = 0;
    while(choice!='n' && choice != 'N'){
        problem a;
        a.set_initial_state();
        a.choose_algorithm();
        printf("Continue? Y/N\n");
        cin >> choice;
    }
}
