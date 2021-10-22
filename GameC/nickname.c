#include "utils.c"

typedef struct nickname {
    char name[16];
} Nickname;

static Nickname nicknames[PLAYERS];

static void set_nickname(int index, const char * name) {
    strcpy(nicknames[index].name, name);
}

static void init_nicknames() {
    set_nickname(0, "Tomáš Plánský");
    set_nickname(1, "Marek Charvát");
    set_nickname(2, "Imrich Zeleňák");
    set_nickname(3, "David Anderle");
    set_nickname(4, "Matěj Dymitrov");
    set_nickname(5, "Martin Job");
}

static Nickname get_nickname(int index) {
    return nicknames[index];
}