/*
 * Astar.h
 *
 *  Created on: Dec 8, 2017
 *      Author: Chrollo
 */

#ifndef ASTAR_H_
#define ASTAR_H_


typedef struct gnode{

	int i[Size][Size];
	 int p,f,g,h;
}G_node;


void init_node(G_node *g);
int manhatten_dis(int g[][Size]);
int init_ASearch(G_node *g,Stack *s);
int ASearch(G_node *g,Stack *s);
int visited(int x[][Size],int y[][Size] );



#endif /* ASTAR_H_ */
