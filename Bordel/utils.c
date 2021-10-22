// nickname_gen.c

#include "utils.c"

typedef struct nickname {
    char name[16];
} Nickname;

static Nickname nicknames[20];

static Nickname getRandomNickname() {
    int rand = random_number(0, 20);
    return nicknames[rand];
}

// utils.c

#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]));

static int difference(int num1, int num2) {
    int result = num1 - num2;
    return result < 0 ? -result : result;
}

static void random_init() {
    srand(time(0));
}

static int random_number(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// game.c

typedef struct player {
    char name[24];
    int tip, wins, diff;
} Player;

typedef struct game {
    Player players[5];
    Player winner;
    int rand;
} Game;
