#include "player.c"
#include "game.c"

typedef struct round {
    Game * parent;
    int rand, lowest_diff;

    void (*init) (Round * round);
    void (*finish) (Round * round);
} Round;

void init_round(Round * round) {
    round->rand = random_number(1, 100);
    round->lowest_diff = -1;
}

void finish_round(Round * round) {
    int i;
    int round_index = round->parent->current_round;
    Player player;

    for (i = 0; i < PLAYERS; i++) {
        player = round->parent->players;
        if (player.diffs_rounds[round_index] == round->lowest_diff) {
            player.wins_rounds[round_index] = 1;
            player.wins++;
        } else {
            player.wins_rounds[round_index] = 0;
        }
    }
}