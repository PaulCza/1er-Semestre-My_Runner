/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** sdzf
*/

#include "my.h"

void parallax_scrolling_two(sfIntRect *test1, sfIntRect *test2, sfIntRect *test3,
sfIntRect *test4)
{

    test_rect(test1, 2, 640);
    test_rect(test2, 2, 640);
    test_rect(test3, 5, 640);
    test_rect(test4, 5, 640);

}

game create_duck(char *str, int a, int b)
{
    game object;

    object.rect = set_rect(object.rect, a, b);
    object.texture = sfTexture_createFromFile("sprite.png", NULL);
    object.sprite = sfSprite_create();
    object.pos.x = 0;
    object.pos.y = 150;
    return object;
}

game manipulate_duck(game duck, win window)
{
    sfSprite_setTexture(duck.sprite, duck.texture, sfTrue);
    sfSprite_setTextureRect(duck.sprite, duck.rect);
    sfSprite_setPosition(duck.sprite, duck.pos);
    sfRenderWindow_drawSprite(window.window, duck.sprite, NULL);
    return duck;
}

void my_runner(parallax test1, parallax test2, parallax test3, win window)
{
    clock clo;
    sfEvent event;
    clo.clock = sfClock_create();
    game duck = create_duck("sprite.png", 110, 110);
    while (sfRenderWindow_isOpen(window.window))
    {
        sfRenderWindow_setFramerateLimit(window.window, 60);
        parallax_scrolling(test1, test2, test3, window.window);
        clo.time = sfClock_getElapsedTime(clo.clock);
        clo.seconds = clo.time.microseconds / 100000.0;
        if (clo.seconds > 1.0) {
            move_rect(&duck.rect, 110, 330);
            sfClock_restart(clo.clock);
        }
        test_rect(&test1.rect, 1, 640);
        test_rect(&test1.rect2, 1, 640);
        parallax_scrolling_two(&test2.rect, &test2.rect2, &test3.rect,
         &test3.rect2);
        manipulate_duck(duck, window);

        sfRenderWindow_display(window.window);
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue){
                    duck.pos.y = duck.pos.y - 10;
                            }
            duck.pos.y = duck.pos.y + 1;
        analyse_events(window.window, event);
    }
}
int main(void)
{
    parallax test1;
    parallax test2;
    parallax test3;
    win window;
    window.video.width = 640;
    window.video.height = 480;
    window.video.bitsPerPixel = 32;
    window.window = sfRenderWindow_create(window.video, "Yolo",
     sfDefaultStyle, NULL);

    test1 = create_bg("bg1.png");
    test2 = create_bg("bg2.png");
    test3 = create_bg("bg3.png");
    my_runner(test1, test2, test3, window);
}