# I2C Bus (Inter-Integrated Circuit)

- is a bus with a clock (SCL) and data (SDA) lines with 7-bit addressing

- bus has two roles:
  - Master - node that generates the clock
  - Slave - node that receives the clock
                    
- four modes of operation for a bus: 
  - Master transmit – master node is sending data to a slave
  - Master receive – master node is receiving data from a slave
  - Slave transmit – slave node is sending data to the master
  - Slave receive – slave node is receiving data from the master

# Setup I2C on Raspberry

- open terminal:
  --> $ sudo raspi-config
  --> “Advanced Options”
  --> “I2C Enable/Disable automatic loading”
  --> reboot Pi
  
# RaspberryPi - I2C_LCD Display 16x2

- connect pins to microcontroller:

Pins:
1. Vcc - connect to Pin "2 or 4"
2. Gnd - connect to Pin "6,9,14,20,25,30,34 or 39"
3. SDA (Serial Data Line) - connect to Pin "3" --> "GPIO 02"
4. SCL (Serial Clock Line) - connect to Pin "5" --> "GPIO 03"
  

# Install I2C-tools & SMBUS

- I2C-tools will tell us the I2C address of the LCD when it’s connected to the Pi
    command prompt --> $ sudo apt-get install i2c-tools
    
- SMBUS gives the Python library we’re going to use access to the I2C bus
    command prompt --> $ sudo apt-get install python-smbus
    Now reboot pi

# Find I2C address
 
- command prompt --> $ i2cdetect -y 1
- open I2C_LCD_driver.py in texteditor --> $ nano I2C_LCD_driver.py
- and to change (line 22) "ADDRESS = 0x27" on your Address
