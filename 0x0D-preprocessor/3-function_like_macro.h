#ifndef __ABS_H__
#define __ABS_H__
#include <stdlib.h>
/**
 * ABS - compute abs
 * @x: the number
 */
#define ABS(x) ((x < 0) ? (~x + 1) : (x))

#endif
