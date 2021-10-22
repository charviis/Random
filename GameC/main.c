#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.c"

int main() {

    int i;

    Game game;
    game.init = init_game;
    game.join_players = join_players;
    game.start_round = start_round;

    // Inicializace náhodného generátoru čísel
    init_random();
    game.init(&game);

    join_players(&game);

    for (i = 0; i < 10; i++) {
        game.start_round(&game);
    }
    game.print(&game);
    return (EXIT_SUCCESS);
}