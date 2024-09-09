/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** sdzf
*/

#include "my.h"

void destroy_object(game test)
{
    sfTexture_destroy(test.texture);
    sfSprite_destroy(test.sprite);
}
void analyse_events(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed){
            sfRenderWindow_close(window);
        }
    }
}
void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}
void test_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = -640;
}