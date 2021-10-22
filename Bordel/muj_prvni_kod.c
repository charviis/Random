#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]));

typedef struct player {
    char name[16];
    int tip;
    int wins;
    int difference;
} Player;

typedef struct game {
    Player players[5];
    Player winner;
    int rand;
} Game;

int difference(int num1, int num2) {
    int result = num1 - num2;
    return result < 0 ? -result : result;
}

void join_players(Game * game) {
    int i;
    
    for (i = 0; i < 8; i++) {
        strcpy(game->players[i].name, "");
    }
}

void print_player(Player player) {
    printf("\nPlayer: %s, Tip: %d, Wins: %d, Difference: %d", player.name, player.tip, player.wins, player.difference);

    //printf("\nName: %s", player.name);
    //printf("\nTip: %d", player.tip);
    //printf("\nWins: %d", player.wins);
    //printf("\nDifference: %d\n", player.difference);
}

int random_number(int min, int max) {
    return rand() % (upper - lower + 1) + lower;
}

void start_game(Game * game) {

    game.rand = random_number(1, 100);

    printf("Random: %d\n", game.rand);
    
    for (i = 0; i < 8; i++) {
        player = game.players[i];
        player.tip = random_number(1, 100);
        player.difference = difference(game.rand, player.tip);
        
        if (player.difference < game.winner.difference)
            game.winner = player;
        
        print_player(player);
    }
    
    game->winner.wins++;
    printf("\n- Winner: %s", game.winner.name);
    print_player(game.winner);

}

int main() {
    Game game;
    int i;
    
    // Inicializace random number generátoru
    srand(time(0));

    join_players(&game);

    for (i = 0; i < 10; i++) {
        start_game(&game);
    }
    return (EXIT_SUCCESS);
}

