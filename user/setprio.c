#include "proc.h"

int main(int argc, char *argv[])
{
    int pid;
    if (setprio(pid))
    {
        printf(2, "setprio failed\n");
        exit(0);
    }
    exit(0);
}