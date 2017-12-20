/*
 * Puzzle.h
 *
 *  Created on: Dec 8, 2017
 *      Author: Chrollo
 */

#ifndef PUZZLE_H_
#define PUZZLE_H_

extern int goalnode[Size][Size];



int M_Up  (int a[Size][Size],int aa[Size][Size],int,int);
int M_Down(int a[Size][Size],int aa[Size][Size],int,int);
int M_L   (int a[Size][Size],int aa[Size][Size]);
int M_R   (int a[Size][Size],int aa[Size][Size],int,int);
void W_file( int a[Size][Size]);
void F_Zero(int a[Size][Size] ,int *i,int *j);
void Search(int a[Size][Size],int l,int u,int r,int d);
int T_Equal(int a[Size][Size],int b[Size][Size]);


#endif /* PUZZLE_H_ */
