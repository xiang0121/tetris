#include "tetris_header.h"

void AllegroInitial()
{
    /* first, set up Allegro and the graphics mode */
    al_init(); /* initialize Allegro */
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    al_init_image_addon();
    //al_install_audio();  // install sound driver
    //al_init_acodec_addon();
    al_init_font_addon();    // install font addons
    al_init_ttf_addon();

}
