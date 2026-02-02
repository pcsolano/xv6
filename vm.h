#ifndef VM_H
#define VM_H

#include "types.h"

pte_t *walkpgcall(pde_t *pgdir, const void *va, int alloc);

#endif // VM_H
