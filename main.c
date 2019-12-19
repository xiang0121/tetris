#include "tetris_header.h"


int main()
{
    int i,j,finish=0;
    srand(time(NULL));

    a[4].x = (int*)malloc(sizeof(int));
    a[4].y = (int*)malloc(sizeof(int));

    AllegroInitial();

    /*********BITMAP************/
    ALLEGRO_BITMAP* block_tile =NULL;
    /***************************/

    ALLEGRO_DISPLAY* display = NULL;    /* pointer to display */
    ALLEGRO_SAMPLE* background = NULL;  /* pointer to sound file */
    ALLEGRO_FONT *font=NULL;
    ALLEGRO_KEYBOARD_STATE KBstate;

    int n = rand()%7;

    block_tile = al_load_bitmap("./tiles.png");
    display = al_create_display(SCREEN_W, SCREEN_H);
    block_init(block_tile,n);
    while(finish!=1)
    {

        al_get_keyboard_state(&KBstate);
        al_clear_to_color(al_map_rgb(255, 255, 255));

        /********************/
        MoveFunction(KBstate, block_tile, n);


        al_flip_display();
        if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
        {
            finish =1;
            return 0;
        }
    }

    al_destroy_display(display);
    al_destroy_bitmap(block_tile);
    free(a[4].x);
    free(a[4].y);
    return 0;
}
