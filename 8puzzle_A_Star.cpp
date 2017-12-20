//============================================================================
// Name        : 8puzzle_A_Star.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include"Config.h"
#include"StackLinkedBased.h"
#include"Puzzle.h"
#include"Astar.h"

FILE *out;
 int goalnode[Size][Size]={{1,2,3},{4,5,6},{7,8,0}};
using namespace std;

int main() {

		out=fopen("out","w+");
	  freopen("in","rt",stdin);
	//==================== Get Inital State ======================//
G_node node;
Stack s;
stackentery poped;
init_node(&node);
init_ASearch(&node,&s);
ASearch(&node,&s);
//while(s.size){
//Pop(&poped,&s);
//W_file(poped.i);
//}
return 0;
}


/*succ test cases
 *
  1 2 3
  0 4 6
  7 5 8
 *
 *  0 1 3
    4 2 5
    7 8 6
 *
 *
 *failed test cases
 *
 *
 *
 *
 *
   1 3 4
  8 6 2
  7 0 5
 *
 *
 *
 *  taskkill /f /im 8puzzle_A_Star.exe /t
 */

