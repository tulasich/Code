import cv2
import numpy as np

# Load image
img = cv2.imread('noisy_image.jpg', 0)

# Compute Fourier Transform of image
f = np.fft.fft2(img)

# Shift the zero-frequency component to the center of the spectrum
fshift = np.fft.fftshift(f)

# Compute the magnitude spectrum
magnitude_spectrum = 20*np.log(np.abs(fshift))

# Threshold the magnitude spectrum to remove low-frequency components
magnitude_spectrum[magnitude_spectrum < 20] = 0

# Count the number of peaks in the magnitude spectrum
num_peaks = cv2.connectedComponents(magnitude_spectrum.astype(np.uint8))[0] - 1

# If there are no peaks, the image is noise-free
if num_peaks == 0:
    print("Noise-free image")
    
# If there is only one peak, the image is affected by Gaussian noise
elif num_peaks == 1:
    print("Gaussian noise")
    
# If there are multiple peaks, the image is affected by salt and pepper noise
else:
    print("Salt and pepper noise")

img = cv2.imread('noisy_image.jpg')

# Apply Gaussian filter
blur = cv2.GaussianBlur(img, (5, 5), 0)

# Save output image
cv2.imwrite('output_image.jpg', blur)

# Display the original and filtered images
cv2.imshow('Original', img)
cv2.imshow('Gaussian Filter', blur)
cv2.waitKey(0)
cv2.destroyAllWindows()