from PIL import Image
from pylab import *
import PIL.ImageOps
import os
import numpy as np
import string

def get_imlist(path):
	""" Returns a list of filenames for jpgs in the directory"""
	return [os.path.join(path,f) for f in os.listdir(path) if
	f.endswith('.jpg')]

filelist = get_imlist("src_img")
newcontent = list()

for infile in filelist:
	basename = os.path.basename(infile) 
	basename = os.path.splitext(basename)[0] 
	tname = os.path.splitext(infile)[0] + "_bm.c"
	cname = os.path.split(tname)[1]
        try:
            pil_im = Image.open(infile) #.convert('L')
	except:
            print("Cannot open file" + infile)
	    next

        print("Thumbnailing" + tname)
	tn = pil_im.resize((128,64))
        #tn = PIL.ImageOps.invert(tn)
        bm = tn.convert('1')
        bm.save("bitmaps/{}.xbm".format(basename))
       # imshow( pil_im)
       # show()
       # imshow( tn)
       # show()
       # imshow( bm)
       # show()
        bm = np.array(bm)

        with open("bitmaps/{}.xbm".format(basename), 'r+') as bmc:
            content = bmc.readlines()
            print(content[0:3])
            content[0] = "#define {}_width = 128\n".format(basename)
            content[1] = "#define {}_height = 64\n".format(basename)
            content[2] = "#include <Arduino.h> \nconst static uint8_t PROGMEM\n{}_bits[] = {{\n".format(basename)
            print(content[0:3])
        #    bmc.seek(0)
        with open("bitmaps/{}.c".format(basename), 'w') as c:
            for i in content:
                c.write(i)


