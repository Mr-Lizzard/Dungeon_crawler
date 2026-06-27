#include "characters.h"

void warriorAttack(Character* character, Character* target) {
    if (character->classes == 1) { // Assuming class 1 is Warrior
        int damage = character->damage*2;
        takeDamage(target, damage);
        printf("%s attacks %s and deals %d damage!\n", character->name, target->name, damage);
    }
}

void mageAttack(Character* character, Character* target1, Character* target2, Character* target3) {
    if (character->classes == 2) { // Assuming class 2 is Mage
        int damage = character->damage;
        takeDamage(target1, damage);
        takeDamage(target2, damage);
        takeDamage(target3, damage);
        printf("%s casts a spell on the enemies dealing %d damage each!\n", character->name, target1->name, target2->name, target3->name, damage);
    }
}

void heal(Character* character, Character* target) {
  int i;
  if(target->currentHp < target->maxHp) {
    do
    {
      target->currentHp++;
      i++;
    } while (i == 2 || target->currentHp == target->maxHp);
    
  }

}
