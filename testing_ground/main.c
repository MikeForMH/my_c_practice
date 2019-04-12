//
//  main.c
//  testing_ground
//
//  Created by Michael Hui on 26/2/2019.
//  Copyright © 2019 Michael Hui. All rights reserved.
//

#include <stdio.h>
int main() {
    int num1;
    int num2;
    for (num1 = 1; num1 <= 4; num1++) {
        for (num2 = 0; num2 < num1; num2 += 2) {
            printf("%d ", num1 * num2);
        }
    }
    return 0;
}
