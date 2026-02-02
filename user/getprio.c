#include "proc.h"

int main(int argc, char *argv[])
{
    int pid;
    if (getprio(pid))
    {
        printf(2, "getprio failed\n");
        exit(0);
    }
    exit(0);
}