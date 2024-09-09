/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** sdzf
*/

#include <stddef.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "stdarg.h"
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/PrimitiveType.h>
#include <SFML/Graphics/RenderStates.h>
#include <SFML/Graphics/Vertex.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/VideoMode.h>
#include <SFML/Window/WindowHandle.h>
#include <SFML/Window/Window.h>
#include <SFML/System/Vector2.h>
#include <stdio.h>

typedef struct object {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
} game;

typedef struct scroll {
    sfSprite *sprite;
    sfTexture *texture;
    sfSprite *dos;
    sfIntRect rect;
    sfIntRect rect2;
} parallax;
typedef struct horloge {
    sfClock *clock;
    sfTime time;
    float seconds;
} clock;

typedef struct fenetre {
    sfRenderWindow *window;
    sfVideoMode video;
} win;

game create_duck(char *str, int a, int b);
sfIntRect set_rect(sfIntRect rect, int width, int height);
parallax create_bg(const char *path);