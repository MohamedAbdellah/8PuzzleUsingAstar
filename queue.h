/*
 * queue.h
 *
 *  Created on: Dec 13, 2017
 *      Author: Chrollo
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include"Config.h"

typedef struct queueentery{

	int a[Size][Size];
   int p;
}queueEntery;


typedef struct queuenode{

 queueentery entery;
 struct queuenode * next;
}queueNode;



#endif /* QUEUE_H_ */
