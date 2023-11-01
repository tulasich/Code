import cv2 as cv
img = cv.imread('noisy_image.jpg')
cv.imshow('Noisy', img)
cv.waitKey(0)