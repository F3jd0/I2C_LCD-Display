# I2C_LCD-for_microcontrollers

Use of I2C bus to connect LCD display with Arduino &amp; Raspberry Pi microcontrollers with Python and C programming language

# I2C Bus (Inter-Integrated Circuit)

- is a bus with a clock (SCL) and data (SDA) lines with 7-bit addressing

- bus has two roles:
  a) Master - node that generates the clock
  b) Slave - node that receives the clock
                    
- four modes of operation for a bus: 
  a) Master transmit – master node is sending data to a slave
  b) Master receive – master node is receiving data from a slave
  c) Slave transmit – slave node is sending data to the master
  d) Slave receive – slave node is receiving data from the master
                                     
# I2C_LCD Display 16x2

# {Arduino}

Pins: 
1. Vcc - connect to 5V
2. Gnd - connect to Gnd
3. SDA (Serial Data Line) -  connect to Analog pin "A4"
4. SCL (Serial Clock Line) - connect to Analog pin "A5" 

# {RaspberryPi}

Pins:
1. Vcc - connect to Pin "2 or 4"
2. Gnd - connect to Pin "6,9,14,20,25,30,34 or 39"
3. SDA (Serial Data Line) - connect to Pin "3" --> "GPIO 02"
4. SCL (Serial Clock Line) - connect to Pin "5" --> "GPIO 03"
