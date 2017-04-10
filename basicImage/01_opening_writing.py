"""
Script to illusrate opening and writing images to files
"""

import numpy as np
import matplotlib.pyplot as plt
from scipy import ndimage
from scipy import misc

#generating the image
f=misc.face(gray=True)
misc.imsave("face.png",f)         #after that we could load by misc.imread()

print("image type=",type(f))
print("dtype= ",f.dtype," shape=",f.shape)
#showing the image
plt.imshow(f,cmap=plt.cm.gray,vmin=30,vmax=300)
plt.axis('off')
plt.contour(f) #draw contour liness
plt.savefig('simple.pdf')
