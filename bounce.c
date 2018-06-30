#include "gevents.h"
#include "gobjects.h"
#include "gwindow.h"

int main(void)
{
    GWindow window = newGWindow(320, 240);
    
    GOval circle = newGOval(0, 110, 20, 20);
    setColor(circle, "BLACK");
    setFilled(circle, true);
    add(window, circle);
    
    double velocity = 2.0
    
    while(true)
    {
        move(circle, velocity, 0);
        
        if (getX(circle) + getWidth(circle) >= getWidth(window))
        {
            velocity = -velocity;
        }
        
        else if (getX(circle) <= 0)
        {
            velocity = -velocity;
        }
    }
}
