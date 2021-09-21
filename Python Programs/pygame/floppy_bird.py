import pygame
x = pygame.init()   # using to initialise the all module inside the pygame  

# Creating Window
gameWindow = pygame.display.set_mode((1200,500))
# used to create the window of game with customise length and breadth 

# For giving title of the game
pygame.display.set_caption("My First Game")

# Game spoecific variables
exit_game = False  # intaialise exit with F
game_over = False  # intaialise game_over with F

# Creating a Game Loop  ---- It handle all events movement by mouse and keyboard
while exit_game != True:  # To hold the screen untill exit_game is not equal to true  
    for event in pygame.event.get():  # used for handling all events
        # print(event) 
        # Now we will handle all type of key movement
        # We will set the function perform by the specific key
        # We can use different type of event from pygame.event module
        if event.type == pygame.QUIT:
            exit_game = True
        if event.type == pygame.KEYDOWN:  #for the event when we press the key
            if event.key == pygame.K_RIGHT:
                print("Yes you have pressed right key")

pygame.quit()
quit() 


