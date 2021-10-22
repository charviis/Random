#include <time.h>

#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]));
#define PLAYERS = 5;
#define ROUNDS = 10;

static int difference(int num1, int num2) {
    int result = num1 - num2;
    return result < 0 ? -result : result;
}

static void init_random() {
    srand(time(0));
}

static int random_number(int min, int max) {
    return rand() % (max - min + 1) + min;
}