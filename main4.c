/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** sdzf
*/

#include "my.h"

void set_parallax(parallax test, sfRenderWindow *window, int a)
{
    sfSprite_setTexture(test.sprite, test.texture, sfTrue);
    sfSprite_setTexture(test.dos, test.texture, sfTrue);
    sfSprite_setTextureRect(test.sprite, test.rect2);
    sfSprite_setTextureRect(test.dos, test.rect);
    sfRenderWindow_drawSprite(window, test.sprite, NULL);
    sfRenderWindow_drawSprite(window, test.dos, NULL);

}
void parallax_scrolling(parallax test1, parallax test2, parallax test3,
sfRenderWindow *window)
{
        sfRenderWindow_setFramerateLimit(window, 60);
        sfRenderWindow_clear(window, sfBlack);
        set_parallax(test1, window, 1);
        set_parallax(test2, window, 1);
        set_parallax(test3, window, 1);
}