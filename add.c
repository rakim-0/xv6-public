#include "types.h"
#include "user.h"

int main(int argc, char** argv) {
    if (argc != 3) {
        printf(2, "ERROR!\nUsage: add num1 num2\n");
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    add(a, b);
    // printf(1, "Sum: %d\n", add(a, b));
    exit();
}