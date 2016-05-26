/* done in class 1 lecture time */

/* What will print? */

printf("%c\n", 'a' - 'A');
    //a = 97 and A = 65, so 97 - 65 = 32
printf("%c\n", 'B' + ('a' - 'A'));
    //B = 66, so 66 + 32 = 97
printf("%c\n", 'b' + ('a' - 'A'));
    //b = 98, so 98 + 32 = 120
printf("%c\n", 'B' + 1);
    //66 + 1 = 67
printf("%c\n", ('z' - 'a' + 1) % 26 + 'a');
    //z = 122 so 122 - 97 + 1 - 26 + a = a

/* RESOURCE: http://ascii.cl/ */
