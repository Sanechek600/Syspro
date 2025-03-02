#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
#include <cstring>
#include <cstdlib>
#include <sys/stat.h>

int main() {
    unlink("ROOT/a_1/b_1/c_0.txt");
    unlink("ROOT/a_1/b_1/c_2.txt");
    unlink("ROOT/a_0/b_2/c_1.bin");
    unlink("ROOT/a_2.txt");

    rmdir("ROOT/a_0/b_2");
    rmdir("ROOT/a_0");
    rmdir("ROOT/a_1/b_0/c_3");
    rmdir("ROOT/a_1/b_0");
    rmdir("ROOT/a_1/b_1");
    rmdir("ROOT/a_1");

    rmdir("ROOT");

}