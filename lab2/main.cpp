#include <unistd.h>
#include <sys/types.h>
#include <iostream>
int main() {
    auto id = fork();
    //попробуйте раскомментировать :)
    //std::cout << std::unitbuf; // отключить буферизацию
    if (id>0) { /*id > 0, выполняется процесс-родитель*/
    std::cout << getpid() << ">> I am your father!" << std::endl;
    }
    else { /*id == 0, выполняется процесс-потомок*/
    std::cout << getpid() << ">> Noooooooooo!" << std::endl;
}
}