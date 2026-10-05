#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {
    // 1. Инициализация SDL (включаем подсистему видео)
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Ошибка инициализации SDL: %s\n", SDL_GetError());
        return 1;
    }

    // 2. Создание окна
    SDL_Window* window = SDL_CreateWindow(
        "SDL2 C Tutorial",         // Заголовок окна
        SDL_WINDOWPOS_CENTERED,    // Позиция по X
        SDL_WINDOWPOS_CENTERED,    // Позиция по Y
        800,                       // Ширина
        600,                       // Высота
        SDL_WINDOW_SHOWN           // Флаги (показать окно)
    );

    if (window == NULL) {
        printf("Не удалось создать окно: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // 3. Создание рендерера (для отрисовки графики через GPU)
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Не удалось создать рендерер: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Основной цикл программы
    bool is_running = true;
    SDL_Event event;

    while (is_running) {
        // Опрос событий (ввод пользователя, системные сигналы)
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                is_running = false;
            }
        }

        // Очистка экрана синим цветом (RGBA: 0, 0, 255, 255)
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
        SDL_RenderClear(renderer);

        // Здесь в будущем будет код отрисовки объектов (текстур, примитивов)

        // Вывод содержимого на экран (двойная буферизация)
        SDL_RenderPresent(renderer);
    }

    // 4. Очистка ресурсов перед выходом
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
