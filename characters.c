#include "characters.h"
#include "enemies.h"

void warriorAttack(Character* character, Enemy* target) {
        int damage = character->damage*2;
        doDamage(target, damage);
        printf("%s attacks %s and deals %d damage!\n", character->name, target->name, damage);
}

void mageAttack(Character* character, Enemy* target1, Enemy* target2, Enemy* target3) {
        int damage = character->damage;
        doDamage(target1, damage);
        doDamage(target2, damage);
        doDamage(target3, damage);
        printf("%s casts a spell on the enemies dealing %d damage each!\n", character->name,   damage);
}

void heal(Character* character) {
  int i = 0;
  if(character->currentHp < character->maxHp) {
    do
    {
      character->currentHp++;
      i++;
    } while (i != 2 && character->currentHp != character->maxHp);
  }
  printf("%s heals for %d HP!\n", character->name, i);
}

int isCharacterAlive(Character* character) {
    return character->currentHp > 0;
}
