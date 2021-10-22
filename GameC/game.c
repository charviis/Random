#include "round.c"

typedef struct game {
    Player players[PLAYERS];
    Round rounds[ROUNDS];
    int current_round;

    void (*print) (Game * game);
    Player (*get_winner) (Game * game);
} Game;

void init_game(Game * game) {
    game->current_round = 0;
}

Player get_game_winner(Game * game) {
    int i;
    Player winner = game->players[0];
    Player player;

    for (i = 1; i < PLAYERS; i++) {
        player = game->players[i];
        if (player.wins > winner.wins)
            winner = player;
    }
    return winner;
}

void join_players(Game * game) {
    int i;
    
    for (i = 0; i < PLAYERS; i++) {
        create_player(get_nickname[i]);
    }
}

void start_round(Game * game) {

    int i;
    Player player;

    Round round = game.rounds[game.current_round];
    round.init = init_round;
    round.finish = finish_round; 
    round.rand = random_number(1, 100);
    
    for (i = 0; i < PLAYERS; i++) {
        player = game.players[i];
        player.difference = difference(game.rand, player.tip);
        
        if (round.lowest_diff > player.diff || round.lowest_diff == -1) {
            round.lowest_diff = player.diff;
        }
    }
    round.finish(&round);
    
}

void print_game(Game * game) {
    int i;

    printf("Random Game\n-----------");
    printf("Players: %i", PLAYERS);
    printf("Rounds: %i", ROUNDS);

    for (i = 0; i < ROUNDS; i++) {
        Round round = game->rounds[i];
        print_round(&round);
    }
}

void print_round(Game * game, Round * round, int round_index) {
    int i;
    Player player;

    printf("Round %i\n-------", round_index);
    printf("\nRandom: %i\n", round->rand);

    for (i = 0; i < PLAYERS; i++) {
        player = game->players[i];

        printf("\nName: %s", player.name);
        printf("\nTip: %i", player.tips[round_index]);
        printf("\nDifference: %i", player.diffs[round_index]);
        printf("\nWin: %s", player.wins[round_index] == 1 ? "True" : "False");
    }

    printf("\nWinner: %s", game->get_winner(game).name);
}