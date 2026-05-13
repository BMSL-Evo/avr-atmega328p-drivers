MCU = atmega328p
F_CPU = 16000000UL

CC = avr-gcc
OBJCOPY = avr-objcopy

APP ?= blink_led

CFLAGS = -mmcu=$(MCU) -DF_CPU=$(F_CPU) -Os -Wall \
         -I drivers/gpio/inc

SRC = applications/$(APP)/main.c\
      drivers/gpio/src/gpio_driver.c

TARGET = build/$(APP)/main

all: $(TARGET).hex

$(TARGET).elf: $(SRC)
	mkdir -p $(dir $(TARGET))
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET).elf

$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) -O ihex -R .eeprom $(TARGET).elf $(TARGET).hex

clean:
	rm -f build/*.elf build/*.hex