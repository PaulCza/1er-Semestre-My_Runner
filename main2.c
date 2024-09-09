/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** sdzf
*/

#include "my.h"

sfIntRect test(sfIntRect rect)
{
    sfIntRect test;
    test.top = 0;
    test.left = -640;
    test.width = 640;
    test.height = 480;
    return (test);
}

parallax create_bg(const char *path)
{
    parallax yolo;

    yolo.texture = sfTexture_createFromFile(path, NULL);
    yolo.sprite = sfSprite_create();
    yolo.dos = sfSprite_create();
    yolo.rect = test(yolo.rect);
    yolo.rect2 = set_rect(yolo.rect2, 640, 480);
    return yolo;

}

game create_object(const char *path_to_spritesheet,
sfVector2f pos, int a, int b)
{
    game yolo;

    yolo.texture = sfTexture_createFromFile(path_to_spritesheet, NULL);
    yolo.sprite = sfSprite_create();
    yolo.pos = pos;
    yolo.rect = set_rect(yolo.rect, a, b);
    return (yolo);
}

sfIntRect set_rect(sfIntRect rect, int width, int height)
{
    rect.top = 0;
    rect.left = 0;
    rect.width = width;
    rect.height = height;
    return (rect);
}