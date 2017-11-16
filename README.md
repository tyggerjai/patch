# patch

A simple sketch to have scrolling bitmaps on a teensy3 and an adafruit RGB LCD screen

bitme.py will take images from src\_img, thumbnail them, convert them to XBM and then convert them to a .c data file. Concatenate the .c files all together to replace pics.c which the sketch will read.

If you have openCV installed, bitme\_cv.py gives a bit more control over the process. You can resize on the fly, change the color, etc. When it's running, press <esc> to save the thumbnail.
