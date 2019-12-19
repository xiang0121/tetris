#include "tetris_header.h"

void MoveFunction(ALLEGRO_KEYBOARD_STATE KBstate, ALLEGRO_BITMAP* block_tile, int n)
{
    int i;
    for(i=0; i<4; i++)
    {
        int x,y;

        al_draw_bitmap_region(block_tile, n*18, 0, 18, 18, a[i].x*18, a[i].y*18, 0);


        if (al_key_down(&KBstate, ALLEGRO_KEY_LEFT))
            a[i].x += -1;
        else if (al_key_down(&KBstate, ALLEGRO_KEY_RIGHT))
            a[i].x += 1;
        else if (al_key_down(&KBstate, ALLEGRO_KEY_DOWN))
            a[i].y += 1;
        else if (al_key_down(&KBstate, ALLEGRO_KEY_UP))
        {
            Point p = a[1];
            x = a[i].y - p.y;
            y = a[i].x - p.x;
            a[i].x = p.x - x;
            a[i].y = p.y + y;
            al_rest(0.01);
        }
        al_rest(0.02);
    }
}

void Move(int dx, int dy)
{
    int i;
    for(i=0; i<4; i++)
    {
        a[i].x += dx;
        a[i].y += dy;
    }
}

void Rotate()
{
    int i,x,y;
    Point p = a[1]; //center of rotation
    for(i=0; i<4; i++)
    {
        x = a[i].y - p.y;
        y = a[i].x - p.x;
        a[i].x = p.x - x;
        a[i].y = p.y + y;
    }
}
