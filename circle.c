#include <malloc.h>
#include "circle.h"

// Circle structure
typedef struct Circle
{
    point p;
    int r;
} Circle;

void fiveCircles(circle c[]) {
    for(int i = 1 ; i <= 5 ; i++)
    {
        c[i].p.x = i;
        c[i].p.y = i;
        c[i].r = i;
    } // Makes 5 circle structs with x = i, y = i and r = i
}

bool circleIsValid(const circle * c) {
{
    if(c -> r > 0) //Checks if radius is > 0
        return true;
    else
        return false;
}

void translate(circle* c, const point* p)
//Increments point of c by the point p
{
    c -> p.x += p -> x;
    c -> p.y += p -> y;

}


