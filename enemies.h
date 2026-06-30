#include "characters.h"

typedef struct {
  char name[50];
  int damage;
  int maxHp;
  int currentHp;
  int dexterity;
} Enemy;

int isEnemyAlive(Enemy* enemy);
void enemyAttack(Enemy* enemy, Character* target);
