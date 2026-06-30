#include "enemies.h"

int isEnemyAlive(Enemy* enemy) {
    return enemy->currentHp > 0;
}

void enemyAttack(Enemy* enemy, Character* target) {
    int damage = enemy->damage;
    doDamage(target, damage);
    printf("%s attacks %s and deals %d damage!\n", enemy->name, target->name, damage);
}