import cv2
import numpy as np

# Load the image
img = cv2.imread('noisy_image.png', 0)

# Denoise the image using wavelet denoising
filtered_img = cv2.fastNlMeansDenoising(img, None, 10, 10, 7)

# Show the original image and the denoised image
cv2.imshow('Original Image', img)
cv2.imshow('Denoised Image', filtered_img)
cv2.waitKey(0)
cv2.destroyAllWindows()
