#include "nickname.c"

typedef struct player {
    char name[24];
    int tips_rounds[ROUNDS];
    int wins_rounds[ROUNDS];
    int diffs_rounds[ROUNDS];
    int wins;
} Player;

static Player create_player(Nickname nickname) {
    Player player;
    strcpy(player.name, nickname.name);
    player.wins = 0;
    return player;
}

