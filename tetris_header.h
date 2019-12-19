#ifndef TETRIS_HEADER_H_INCLUDED
#define TETRIS_HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>

#define SCREEN_W  480
#define SCREEN_H  640

#define ROW 20
#define COL 10

typedef struct block{

    int x, y;
    int state;
    int clean;

}BLOCK;

struct Point
{
    int x,y;

}a[4], b[4];

typedef struct Point Point;


void AllegroInitial();
void block_init(ALLEGRO_BITMAP* block_tile, int n);
void MoveFunction(ALLEGRO_KEYBOARD_STATE KBstate, ALLEGRO_BITMAP* block_tile, int n);
void Move(int dx, int dy);
void Rotate();

#endif // TETRIS_HEADER_H_INCLUDED
