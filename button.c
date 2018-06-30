#include <stdio.h>
#include <string.h>

#include "gevents.h"
#include "gointeractors.h"
#include "gwindow.h"

int main(void)
{
    GWindow window = newGWindow(320, 240);
    
    GButton button = newGButton("Button");
    setActionCommand(button, "click");
    
    addToRegion(window, button, "SOUTH");
    
    while(true)
    {
        GActionEvent event = wairForEvent(ACTION_EVENT);
        
        if (getEventType(event) == WINDOW_CLOSED)
        {
            break;
        }
        
        if (strcmp(getActionCommand(event), "click") == 0)
        {
            printf("button was clicked\n");
        }
    }
    closeGWindow(window);
    return 0;
}
