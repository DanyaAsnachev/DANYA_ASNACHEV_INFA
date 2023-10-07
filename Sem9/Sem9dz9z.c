#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct color
{
    unsigned char r, g, b;
};
typedef struct color Color;


int main()
{
    int y = 1, x1, x2;
    // Данные пикселей в картинке 3x2
    Color data[240000];
    for (int i = 1; i <= 240000; ++i)
    {
        if (i % 600 == 0)
        {
            y += 1;
            x1 = 300 + sqrt(120 * 120 - (y - 200)*(y - 200));
            x2 = 300 - sqrt(120 * 120 - (y - 200)*(y - 200));
        }
        if ((120 * 120 - (y - 200)*(y - 200)) >= 0)
        {
            if (((i % 600) >= x2) && (x1 >= (i % 600)))
            {
                data[i].r = 190;
                data[i].g = 0;
                data[i].b = 41;
            }
            else
            {
                data[i].r = 255;
                data[i].g = 255;
                data[i].b = 255;
            }
        }
        if ((120 * 120 - (y - 200)*(y - 200)) < 0)
        {
            data[i].r = 255;
            data[i].g = 255;
            data[i].b = 255;
        }
    }


    // Сохраняем картинку в текстовом формате
    FILE* ft = fopen("my_text.ppm", "w");
    fprintf(ft, "P3\n600 400\n255\n");
    for (int i = 1; i <= 240000; i++) 
    {
        fprintf(ft, "%i %i %i\n", data[i].r, data[i].g, data[i].b);
    }
    fclose(ft);


    // Сохраняем картинку в бинарном формате
    FILE* fb = fopen("my_binary.ppm", "wb");
    fprintf(fb, "P6\n%i %i\n255\n", 600, 400);
    fwrite(data, sizeof(Color), 240000, fb);
    fclose(fb);
}