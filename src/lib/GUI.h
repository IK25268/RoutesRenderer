#pragma once
#include <SDL2/SDL_image.h>


void PrintMapCells(void* map);
void PrintMapLevelCells(void* map);
void PrintMapTypeCells(void* map);
void PrintMapTypeCellsSDL(void* map);
void PrintPoints(void* map);
void PrintEdges(void* map);
void PrintGraphRoutes(void* map, void* graphRoutes);
void PrintText(char* text);
void EnterChar(char* letter, char* text, char* extraData);
void EnterInt(int* digit, char* text, char* extraData);
void EnterString(char* string, char* text);
void DrawCell(void* map, char road, int pos);

