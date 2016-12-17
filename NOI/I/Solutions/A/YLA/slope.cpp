#include <iostream>

using namespace std;

int main () {
    int num_otsechki = 0;
    while (1) {
        cin >> num_otsechki;
        if (num_otsechki < 100 && num_otsechki > 0) {
            break;
        } else {
            cout << "Out of range!" << endl;
        }
    }
    int coordinats[num_otsechki][4];

    for (int i = 0; i < num_otsechki; i++) {
        cin >> coordinats[i][0] >> coordinats[i][1] >> coordinats[i][2] >> coordinats[i][3];
        while (1) {
            if (coordinats[i][0] > 0 && coordinats[i][1] > 0 && coordinats[i][2] > 0 && coordinats[i][3] > 0) {
                break;
            } else {
                cout << "Coordinates must be positive!" << endl;
            }
        }
    }

    int between_x = 0;
    int between_y = 0;
    int between_points_array[num_otsechki][2];

    for (int i = 0; i < num_otsechki; i++) {
        int first_x = coordinats[i][0];
        int first_y = coordinats[i][1];
        int second_x = coordinats[i][2];
        int second_y = coordinats[i][3];

        between_x = second_x - first_x;
        between_y = second_y - first_y;
        between_points_array[i][0] = between_x;
        between_points_array[i][1] = between_y;
    }


    int horizont_angle = 0;
    int otves_angle = 0;
    for (int i = 0; i < num_otsechki; i++) {
            for(int j = i + 1; j <= num_otsechki; j++) {
                if (between_points_array[i][0] == between_points_array[j][0] &&
                    between_points_array[i][1] == between_points_array[j][1] ) {
                    between_points_array[j][0] = 201;
                    between_points_array[j][1] = 201;
                }

                if (between_points_array[i][0] == 0) {
                    otves_angle++;
                    between_points_array[i][0] = 201;
                    between_points_array[i][1] = 201;
                }
                if (between_points_array[i][1] == 0) {
                    horizont_angle++;
                    between_points_array[i][0] = 201;
                    between_points_array[i][1] = 201;
                }
            }
    }

    int num_different = 0;
        if (otves_angle > 0) {
            num_different += 1;
        }
        if (horizont_angle > 0) {
            num_different += 1;
        }
    for (int i = 0; i < num_otsechki; i++) {
        if (between_points_array[i][0] != 201 && between_points_array[i][1] != 201) {
            num_different++;
        }

    }

    cout << num_different << endl;

    return 0;
}
