import cv2
import os
import numpy as np
import string

def get_imlist(path):
    """ Returns a list of filenames for jpgs in the directory"""
    return [f for f in os.listdir(path) if f.endswith('.jpg')]

def nothing(x):
    pass

filelist = get_imlist(".")
cv2.namedWindow('image')
for i in ('R', 'G', 'B'):
    cv2.createTrackbar(i, 'image', 0, 255, nothing)
    cv2.setTrackbarPos(i, 'image', 255)
cv2.createTrackbar('Thresh', 'image', 0, 255, nothing)
cv2.setTrackbarPos('Thresh', 'image', 50)

for infile in filelist:
        cv2.resizeWindow('image', 800, 600)
        for i in ('R', 'G', 'B'):
            cv2.setTrackbarPos(i, 'image', 255)
        cv2.setTrackbarPos('Thresh', 'image', 50)
        print("Thumbnailing  " + infile)
        basename = os.path.basename(infile) 
        basename = os.path.splitext(basename)[0] 
        tname = os.path.splitext(infile)[0] + "_bm.c"
        cname = os.path.split(tname)[1]
        try:
            pil_im = cv2.imread(infile) #.convert('L')
        except:
            print("Cannot open file" + infile)
            next
        img_height, img_width, chans = pil_im.shape
        r_width, r_height = 128,64
        img_scale = float(img_width)/float(img_height)
        print("Scale factor {}".format(img_scale))
        print("{} {} ".format(img_height, img_width))
        print("Thumbnailing " + tname)
        gray = cv2.cvtColor(pil_im, cv2.COLOR_BGR2GRAY)
        gray_r = cv2.resize(gray, (128,64))
        print( gray.shape)
        print( gray_r.shape)

        final = np.zeros((64,128,3), np.uint8)
        mask = np.zeros((64,128,3), np.uint8)
        #display = np.zeros((64,128,3), np.uint8)
        #thresh, bw_r = cv2.threshold(gray_r, 128,255,cv2.THRESH_BINARY)
        #display = cv2.cvtColor(bw_r, cv2.COLOR_GRAY2BGR)
        #mask = cv2.cvtColor(bw_r, cv2.COLOR_GRAY2BGR)



        while(1):

            r = cv2.getTrackbarPos('R', 'image')
            g = cv2.getTrackbarPos('G', 'image')
            b = cv2.getTrackbarPos('B', 'image')
            mask[:] = [b,g,r]

            my_t = cv2.getTrackbarPos('Thresh', 'image')
            gray_r = cv2.resize(gray, (r_width, r_height))
            thresh, bw_r = cv2.threshold(gray_r, my_t,255,cv2.THRESH_BINARY)
            display = cv2.cvtColor(bw_r, cv2.COLOR_GRAY2BGR)

            final = cv2.bitwise_and(display, mask)
            #cv2.imshow('image', final)
            cv2.imshow('Original', pil_im)
            cv2.imshow('Gray', gray)
            cv2.imshow('image', final)
            k = cv2.waitKey(1) & 0xFF
            if k == 27:
                break
            elif k == ord('i'):
                print("Resizing with {}".format(img_scale))
                r_height = int(128.0 / img_scale)
                if r_height > 64:
                    print("Height {} unacceptable. Resizing".format(r_height))
                    r_height = 64
                    r_width = int(img_scale * r_height)
                print(r_width, r_height) 
                mask.resize((r_height, r_width, 3))
                final.resize((r_height, r_width, 3))
                print("Final resize: {}".format(final.shape))
                print("mask resize: {}".format(mask.shape))
            elif k == ord('u'):
                r_width, r_height = (128,64)
                mask.resize((r_height, r_width, 3))
                final.resize((r_height, r_width, 3))
                print("Final resize: {}".format(final.shape))
                print("mask resize: {}".format(mask.shape))
            elif k == ord('b'):
                for i in ('R', 'G', 'B'):
                    cv2.setTrackbarPos(i, 'image', 0)











        with open("bm/{}_test.xbm".format(basename), 'w') as c:
            c.write("{")
            bit_count = 0 
            mybyte = 0xFF 
            row_count = 0
#            print((bw_r.shape))
            for j in bw_r:
                row_count += 1
                for i in j:

                    #print(i)

                    if (i > 0):
                        mybyte &= ~(1 << bit_count)
                    bit_count += 1
                    if bit_count == 8:
                        bit_count = 0
                        c.write(hex(mybyte) + ", ")
                        #if (mybyte > 0):
#                            print(hex(mybyte) ) 
                        mybyte = 0xFF
                if (row_count % 23) == 0:
                    c.write("\n")
                #pix_count = 0
                #row_count += 1
                #for j in i:
                    #pix_count += 1
                    #c.write(hex(j) + ", ")
            for col in (r,g,b):
                c.write(hex(col) + ", ")
            c.write("\n},")
#            print(row_count)


