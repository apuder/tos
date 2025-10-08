
all:
	gcc -I../../include main.c lcd.c lcd-gpio.c -o lcd-gpio -lpigpio
	gcc -I../../include main.c lcd.c lcd-spi.c -o lcd-spi -lpigpio

clean:
	rm -f lcd-spi lcd-gpio

