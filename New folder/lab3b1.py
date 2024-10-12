# the rgba value of every pixel in the image is extracted and stored in a list as tuples (r, g, b, a)

from PIL import Image

myImage = Image.open('Screenshot (430).png', 'r')

pixelValues = list(myImage.getdata())

for i in range(1000):
    print(pixelValues[i])
print(pixelValues.__len__())
