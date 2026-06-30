typedef struct {
  char name[50];
  int damage;
  int maxHp;
  int currentHp;
  int dexterity;
  int classes;
} Character;

Character Warrior = {"Warrior", 2, 12, 12, 0, 1};

Character Mage = {"Mage", 2, 8, 8, 0, 2};

Character Cleric = {"Cleric", 2, 10, 10, 0, 3};

void warriorAttack(Character* character, Enemy* target);
void mageAttack(Character* character, Enemy* target1, Enemy* target2, Enemy* target3);
void heal(Character* character);
void doDamage(Character* character, int amount);
int isCharacterAlive(Character* character);