#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarVencedor(int jog1, int jog2) {
    if (jog1 == jog2) return 0;

    if ((jog1 == 1 && (jog2 == 3 || jog2 == 5)) || // Pedra ganha de tesoura e fogo
        (jog1 == 2 && (jog2 == 1 || jog2 == 4)) || // Papel ganha de pedra e buraco
        (jog1 == 3 && jog2 == 2) || // Tesoura ganha de papel
        (jog1 == 4 && jog2 == 6) || // Buraco ganha de chuva
        (jog1 == 5 && jog2 == 2) || // Fogo ganha de papel
        (jog1 == 6 && (jog2 == 5 || jog2 == 2))) { // Chuva ganha de fogo e papel
        return 1; // Jogador 1 vence
    }

    return -1; // Jogador 2 vence
}

int main() {
    int jog1, jog2;

    printf("*** Jogo Pedra, Papel, Tesoura, Buraco, Chuva, Fogo ***\n");
    printf("1. Pedra\n2. Papel\n3. Tesoura\n4. Buraco\n5. Fogo\n6. Chuva\n\n");

    printf("Jogador 1, escolha uma opção: ");
    scanf("%d", &jog1);

    printf("Jogador 2, escolha uma opção: ");
    scanf("%d", &jog2);

    if (jog1 < 1 || jog1 > 6 || jog2 < 1 || jog2 > 6) {
        printf("Opção inválida!\n");
        return 1;
    }

    const char *opcoes[] = {"", "Pedra", "Papel", "Tesoura", "Buraco", "Fogo", "Chuva"};

    printf("Jogador 1 escolheu: %s\n", opcoes[jog1]);
    printf("Jogador 2 escolheu: %s\n", opcoes[jog2]);

    int resultado = verificarVencedor(jog1, jog2);

    if (resultado == 0) {
        printf("### O jogo empatou! ###\n");
    } else if (resultado == 1) {
        printf("### Jogador 1 venceu! ###\n");
    } else {
        printf("### Jogador 2 venceu! ###\n");
    }

    return 0;
}