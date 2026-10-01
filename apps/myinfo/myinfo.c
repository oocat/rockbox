#include "config.h"
#include "lcd.h"
#include "font.h"
#include "button.h"
#include "kernel.h"
#include "screen_access.h"

#include "myinfo.h"

void myinfo_main(void)
{
    lcd_clear_display();

    lcd_putsxy(10, 10, "MyInfo");

    lcd_update();

    while (1)
    {
        int button = button_get(true);
        lcd_putsf(10, 10, "Button: %d", button);

        // if (button == BUTTON_POWER)
        //     break;
    }

    lcd_clear_display();
    lcd_update();
}