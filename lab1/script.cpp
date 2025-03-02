#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
#include <cstring>
#include <cstdlib>
#include <sys/stat.h>

using namespace std;

int main() {
    mkdir("ROOT", S_IRWXU);
    chdir("ROOT");

    mkdir("a_1", S_IRWXU);
    mkdir("a_1/b_1", S_IRWXU);
    mkdir("a_1/b_0", S_IRWXU);
    mkdir("a_1/b_0/c_3", S_IRWXU);
    mkdir("a_0", S_IRWXU);
    mkdir("a_0/b_2", S_IRWXU);

    int fd_a2 = open("a_2.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
    write(fd_a2, "cat", 3);
    close(fd_a2);

    link("a_2.txt", "a_1/b_1/c_0.txt");

    symlink("a_2.txt", "a_1/b_1/c_2.txt");

    int fd_c1 = open("a_0/b_2/c_1.bin", O_WRONLY | O_CREAT, S_IRWXU);
    char zeros[848];
    for (size_t i=0; i<848; i++){
        zeros[i]='0';
    }
    write(fd_c1, zeros, 848);
    close(fd_c1);
}
