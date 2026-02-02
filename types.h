#ifndef XV6_TYPES_H
#define XV6_TYPES_H

typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef uint pde_t;

#define NPRIO 10
#define LOWEST_PRIO 9
#define NORM_PRIO 5
#define HIGHEST_PRIO 0

#ifndef NULL
#define NULL 0
#endif

#endif
