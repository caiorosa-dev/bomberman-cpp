//
// Created by Caio on 16/10/2023.
//

#ifndef GAME02_CBP_GAMECLOCK_H
#define GAME02_CBP_GAMECLOCK_H


#include <cstdlib>
#include <ctime>
namespace GameClock {
    clock_t end, start;
    int duration;
    bool startedTimer = false;

    int gameTime = 0;

    void tick() {
        // Resetar o ínicio do clock caso necessário
        if (duration == 0 && !startedTimer) {
            start = clock();
            startedTimer = true;
        }

        end = clock();
        // Calcular duração do ciclo
        duration = (end - start) / CLOCKS_PER_SEC;

        if (duration >= 1) {
            duration = 0;
            // Variável para controlar se o contador deve reiniciar
            startedTimer = false;

            gameTime++;
        }
    }
}

#endif //GAME02_CBP_GAMECLOCK_H