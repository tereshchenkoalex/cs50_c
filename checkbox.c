#include <stdio.h>
#include <string.h>

#include "gevents.h"
#include "ginteractors.h"
#include "gwindow.h"

int main(void)
{
    GWindow window = newGWindow(320, 240);
    
    GCheckBox checkbox = newGCheckBox("I agree");
    setActionComand(checkbox, "check");
    addToRegion(window, checkbox, "SOUTH");
    
    while(true)
    {
        GActionEvent event = waitForEvent(ACTION_EVENT)
        
        if (getEventType(event) == WINDOW_CLOSED)
        {
            break;
        }
        if (strcmp(getActionCommand(event), "check") == 0)
        {
            if (isSelected(checkbox)
            {
                printf("checkbox was checked\n");
            }
            else
            {
                printf("checkbox was unchecked\n");
            }
        }
    }
    
    closeWindow(window);
    return 0;
}
