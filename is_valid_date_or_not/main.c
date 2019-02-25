//
//  main.c
//  is_valid_date_or_not
//
//  Created by Michael Hui on 25/2/2019.
//  Copyright © 2019 Michael Hui. All rights reserved.
//

# include <stdio.h>
int main(){
    int year, month, day;
    int is_leap_year = 0, is_valid_date = 1;
    scanf("%d-%d-%d", &year, &month, &day);
    if((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)){
        is_leap_year = 1;
    }
    if(year < 1 || year > 3000 || month < 1 || month > 12 || day > 31 || day < 1){
        is_valid_date = 0;
    }
    if(is_valid_date){
        if(month == 4 || month == 6 || month == 9 || month == 11){
            if(day == 31){
                is_valid_date = 0;
            }
        }
        if(month == 2){
            if(is_leap_year){
                if(day > 29){
                    is_valid_date = 0;
                }
            } else{
                if(day > 28){
                    is_valid_date = 0;
                }
            }
        }
    }
    if(is_valid_date){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
