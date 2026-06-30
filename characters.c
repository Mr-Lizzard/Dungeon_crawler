#include "characters.h"

void warriorAttack(Character* character, Character* target) {
        int damage = character->damage*2;
        takeDamage(target, damage);
        printf("%s attacks %s and deals %d damage!\n", character->name, target->name, damage);
}

void mageAttack(Character* character, Character* target1, Character* target2, Character* target3) {
        int damage = character->damage;
        takeDamage(target1, damage);
        takeDamage(target2, damage);
        takeDamage(target3, damage);
        printf("%s casts a spell on the enemies dealing %d damage each!\n", character->name,   damage);
}

void heal(Character* character) {

  int i = 0;
  if(character->currentHp < character->maxHp) {
    do
    {
      character->currentHp++;
      i++;
    } while (i != 2 && character->currentHp == character->maxHp);
  }
}
