#ifndef PIECE_H
#define PIECE_H

struct ActivePiece
{
  int type;
  int rotation;
  int x;
  int y;
};

extern ActivePiece currentPiece;

void spawnNewPiece();
const int (*getCurrentShape())[4];
bool canMove(int newX, int newY, int rotation);
void lockPieceToGrid();

#endif