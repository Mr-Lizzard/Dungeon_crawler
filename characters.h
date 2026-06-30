typedef struct {
  char name[50];
  int damage;
  int maxHp;
  int currentHp;
  int dexterity;
  int classes;
} Character;

void warriorAttack(Character* character, Character* target);
void mageAttack(Character* character, Character* target1, Character* target2, Character* target3);
void heal(Character* character);
void takeDamage(Character* character, int amount);
void verifyClass(Character* character);
void rollDex(Character* character);