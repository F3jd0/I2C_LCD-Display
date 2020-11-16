"""
Code for use LCD via I2C BUS
#Raspberry Pi
#You will find the connection in Branches
#By F3jd0
#2020-11-16

"""

#import Driver("library") for LCD
import I2C_LCD_driver

from time import *
#def lcd via imported driver
 lcd = I2C_LCD_driver.lcd()
#("", 1, 0) = print text and set the cursor on the first column and first row
  lcd.lcd_display_string("Hello", 1, 0)
#function to change the time the text stays on
   time.sleep(3)
    lcd.lcd_clear()

  # to end the program -> press ctrl+C
