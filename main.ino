import pygame

pygame.init()

displayscreen = pygame.display.set_mode((1350,750))

pygame.display.set_caption("Hello World")

pink = (255,182,193)
white = (255,255,255)
black = (0,0,0)
blue = (100,100,255)
green = (0,255,0)

displayscreen.fill(white)

pygame.draw.line(displayscreen,blue,(100,200),(560,10),1)

pygame.draw.rect(displayscreen,black,(300,400,500,200))

pygame.draw.circle(displayscreen,pink,(100,300),50)

displayer = pygame.PixelArray(displayscreen)

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            quit()
            
    pygame.display.update()
