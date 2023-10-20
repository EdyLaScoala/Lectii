#include <iostream>
#include <ncurses.h>
#include <thread>
#include <chrono>

using namespace std;

void playSound(int frequency, int duration) {
    cout << "Playing sound at frequency: " << frequency << " Hz (Press any key to stop)" << endl;
    // You can add code here to generate sound at the given frequency
    // You might need to use a library or system-specific functions for sound generation

    while (!kbhit()) {
        // Continue playing the note while no key is pressed
    }

    cout << "Note stopped." << endl;
}

int main() {
    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, true);
    keypad(stdscr, true);

    cout << "C++ Piano Program - Press keys A to L to play notes. Press Q to quit." << endl;

    while (true) {
        int key = getch();

        if (key == 'Q' || key == 'q') {
            cout << "Exiting the program." << endl;
            break;  // Exit the program
        }

        int frequency = 0;
        int duration = 500;  // Duration of each note in milliseconds

        // Map keys to frequencies for natural and sharp notes (C to B)
        switch (key) {
            case 'A':
            case 'a':
                frequency = 261;  // C (Middle C)
                break;
            case 'W':
            case 'w':
                frequency = 277;  // C#/Db
                break;
            case 'S':
            case 's':
                frequency = 293;  // D
                break;
            case 'E':
            case 'e':
                frequency = 311;  // D#/Eb
                break;
            case 'D':
            case 'd':
                frequency = 329;  // E
                break;
            case 'F':
            case 'f':
                frequency = 349;  // F
                break;
            case 'T':
            case 't':
                frequency = 369;  // F#/Gb
                break;
            case 'G':
            case 'g':
                frequency = 392;  // G
                break;
            case 'Y':
            case 'y':
                frequency = 415;  // G#/Ab
                break;
            case 'H':
            case 'h':
                frequency = 440;  // A
                break;
            case 'U':
            case 'u':
                frequency = 466;  // A#/Bb
                break;
            case 'J':
            case 'j':
                frequency = 493;  // B
                break;
            // Add more cases for other keys...
            default:
                cout << "Invalid key. Press Q to quit." << endl;
                continue;  // Skip the sound-playing part
        }

        // Play the note continuously while the key is held down
        playSound(frequency, duration);
    }

    endwin();
    return 0;
}
