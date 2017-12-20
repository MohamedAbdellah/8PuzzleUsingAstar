/*
 * Astar.cpp
 *
 *  Created on: Dec 8, 2017
 *      Author: Chrollo
 */

#include"StackLinkedBased.h"
#include"Puzzle.h"
#include<stdio.h>
#include<stdlib.h>
#include"Astar.h"

#include <iostream>
#include<stdio.h>
#include<stdlib.h>


extern FILE *out;


void init_node(G_node *g){
	g->f=0;
	g->g=0;
	g->h=0;
	g->p=0;
	 for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				scanf("%d",&g->i[i][j]);
}

//================================================================================//

int manhatten_dis(int g[][Size]){
	int k=0,cost=0,x=0,y=0;

	 for(int i=0;i<3;i++)
			for(int j=0;j<3;j++){
				if(k==8)
					k=-1;
				if(g[i][j]!=++k){
				int tar=g[i][j];
                  if (tar==0)
                	  continue;
					if  (tar/Size==0){
						x=0;
						y=tar-1;
					}
					else if  (tar%Size==0){
						x=(tar/Size)-1;
						y=Size-1;
					}
					else {
				  x=(tar/Size);
				  y=(tar%Size)-1;
					}

				cost =cost+(abs(x-i)+abs(y-j));
			}}


	 return cost;
}

//=============================================================================================//

int init_ASearch(G_node *g,Stack *s){

	ReturnType rt;



	rt=CreateStack(s);
	if(rt==StackCreatSUC){
		return 1;
	}
	else {
		return 0;
	}
}

//===============================================================================================//

int visited(int  x[][Size],int y[][Size]){
	int cunt=0;
	for(int i=0;i<Size;i++)
					for(int j=0;j<Size;j++)
				{
						x[i][j]=y[i][j];
				        cunt++;
				}
				if(cunt==9){
					cunt=0;
					return 1;
				}
				else return 0;
}

//==============================================================================================//
int ASearch(G_node *g,Stack *s){
ReturnType i;
int t[Size][Size];
//
stack visited;
stackentery v_poped;
StackEntery te;
//
int temp1=1000;
 int temp=0,h=0, n_vistied=0,flag=0;
 static int temp2=0;
 static int temp3=0;
stackentery poped;
int val=0,indx1,indx2;
G_node re_node;

i=push((StackEntery *)g->i,s);
push((StackEntery *)g->i,&visited);
F_Zero(g->i,&indx1,&indx2);

////////////////////////////////////////////////////

val=M_L(g->i,t);

if(val==1){

	i=push((StackEntery *)t,s);
	val=0;
	//temp2++;
}

val=M_Down(g->i,t,indx1,indx2);

if(val==1){
	i=push((StackEntery *)t,s);
    val=0;
    //temp2++;
}

val=M_Up(g->i,t,indx1,indx2);

if(val==1){

	i=push((StackEntery *)t,s);
	val=0;
	//temp2++;
}
val=M_R(g->i,t,indx1,indx2);

if(val==1){
	i=push((StackEntery *)t,s);
    val=0;
  //  temp2++;
}
temp2++;

while(((s->size)-temp2)>0){

	flag=0;
	Pop(&poped,s);

temp=manhatten_dis(poped.i);

n_vistied=RetrieveStack(&visited, poped.i);

    /////////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////////////
      if( temp<temp1 &&  n_vistied==0 ){
    	  h=temp;
    	  flag=1;
    	  for(int i=0;i<3;i++)
    		   {
    			for(int j=0;j<3;j++)
    				{
    				t[i][j]=poped.i[i][j];
    				re_node.i[i][j]=t[i][j];
    				}
    }
    	  temp1=temp;
   }
}

n_vistied=0;

W_file(t);
fprintf(out, "the heuristic value :%d \n             ==============================="
		"===========================\n",h);



if(h==0 ){
exit(0);
}
temp3++;
ASearch(&re_node,s);
return i;
}
