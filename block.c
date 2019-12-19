#include "tetris_header.h"

void block_init(ALLEGRO_BITMAP* block_tile, int n)
{
    srand(time(NULL));

    int table[ROW][COL] = {0};
    int figures[7][4]=
    {
        1,3,5,7, // I
        2,4,5,7, // Z
        3,5,4,6, // S
        3,5,4,7, // T
        2,3,5,7, // L
        3,5,7,6, // J
        2,3,4,5, // O
    };

    int i,j;
    for(i=0; i<4; i++)
    {
        a[i].x = figures[n][i]%2;
        a[i].y = figures[n][i]/2;

    }



//    al_draw_bitmap_region(block_tile,0,0,18,18,0,0,0);          //BLUE(T block)
//    al_draw_bitmap_region(block_tile,18,0,18,18,0,18,0);        //PURPLE
//    al_draw_bitmap_region(block_tile,36,0,18,18,0,36,0);        //RED
//    al_draw_bitmap_region(block_tile,54,0,18,18,0,54,0);        //GREEN
//    al_draw_bitmap_region(block_tile,72,0,18,18,0,72,0);        //YELLOW
//    al_draw_bitmap_region(block_tile,90,0,18,18,0,90,0);        //LIGHT BLUE
//    al_draw_bitmap_region(block_tile,108,0,18,18,0,108,0);      //ORENGE

}
