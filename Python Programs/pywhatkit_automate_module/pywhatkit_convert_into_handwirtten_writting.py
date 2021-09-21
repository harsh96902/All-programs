import pywhatkit as kit
# kit.text_to_handwriting()
# This function can be used to convert text to hand written characters,
# the character sets has been written by me

# string (required) - String that you want to convert to handwritten text
# save_to (optional, val = "pywhatkit.png") - Path where the image will be saved
# rgb (optional, val = [0,0,138]) - Color of the handwritten character in rgb format
kit.text_to_handwriting("Hello guys I am Harsh Kumar","C:\Users\USER\Pictures\Saved Pictures\handwritten.png","[0,0,138]")