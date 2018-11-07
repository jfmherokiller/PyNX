import sys
import os

import pygame_sdl2 as pygame
from pygame_sdl2 import font as pygame_font  # So font can be replaced with ftfont
from pygame_sdl2.compat import as_unicode, as_bytes, xrange_, filesystem_errors
from pygame_sdl2.controller import Controller, get_string_for_axis, get_string_for_button

pygame.init()
fonts = pygame_font.get_fonts()
fontpath = pygame_font.match_font(pygame_font.get_default_font(), 0, 0)
font = pygame_font.Font(fontpath, 36)

screen = pygame.display.set_mode((1280, 720))
clock = pygame.time.Clock()
done = False

def main():
    text = font.render("Hello, World", True, (0, 128, 0))
    while not done:
            screen.fill((255, 255, 255))
            screen.blit(text, (320 - text.get_width() // 2, 240 - text.get_height() // 2))
            pygame.display.flip()
            clock.tick(60)

if __name__ == "__main__":
    main()