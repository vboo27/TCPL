#include <stdio.h>
#include <stdlib.h>

// 1.4
#define LOWER     0
#define UPPER     300
#define STEP     20

// 1.5.4
#define OUT 	0
#define IN 		1

int main()
{
// chapter 1
    /*
    当华氏度为0、20、……300时，分别打印华氏度和摄氏度对照表
    */
    /*
     * 
     */
// V1 V2
//    int fahr, celsius;
//    int lower, upper, step;
// V3
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;      /* 温度表的下限 */
    upper = 200;    /* 温度表的上限 */
    step = 20;      /* 步长 */
    fahr = lower;

    printf("Chapter 1.1 ~ 1.2 Start ---------------------------------\n");

    // Exercise 1-3
    printf("Fahr      Celsius\n");

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
// V1
//        printf("%d \t %d \n", fahr, celsius);
// V2
//        printf("%3d \t %6d \n", fahr, celsius);
// V3
        printf("%3.0f \t %6.1f \n", fahr, celsius);
        fahr = fahr + step;
    }

// Exercise 1-4
    /*
    当摄氏度为-20、-10、0、10、20……100时，分别打印摄氏度和华氏度对照表
     */
    printf("\n\n");
    lower = -20;
    upper = 100;
    step = 10;
    celsius = lower;

    printf("Celsius    Fahr\n");
    while (celsius <= upper) {
        fahr = (9 * celsius / 5.0) + 32;
        printf("%3.0f \t %6.1f \n", celsius, fahr);
        celsius = celsius + step;
    }
    printf("Chapter 1.1 ~ 1.2 End -----------------------------------\n");

    printf("\n\nChapter 1.3 Start ---------------------------------------\n");
    
    printf("Fahr      Celsius\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3.0f \t %6.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    return 0;

// Exercise 1-5
    printf("\n\n");
    printf("%s \t %s \n", "Fahr", "Celsius");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3.0f \t %6.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    printf("Chapter 1.3 End -----------------------------------------");

    printf("\n\nChapter 1.4 Start ---------------------------------------\n");
    printf("%s \t %s \n", "Fahr", "Celsius");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3.0f \t %6.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    printf("Chapter 1.4 End -----------------------------------------");


    printf("\n\nChapter 1.5.1 Start ---------------------------------------\n");
//    int c;
// V1
    // c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    // }
// V2
    // while ((c = getchar()) != EOF) {
    //     putchar(c);
    // }
// Exercise 1-6
//     int result;
//     while (result = (getchar() != EOF)) {
//         printf("result is %d \n", result);
//     }
//     printf("result is %d \n", result);
// Exercise 1-7
    printf("The value of EOF is %d\n", EOF);
    printf("Chapter 1.5.1 End -----------------------------------------");

    printf("\n\nChapter 1.5.2 Start ---------------------------------------\n");
// V1
//    long nc;
//    nc = 0;
//    while (getchar() != EOF) {
//        ++nc;
//    }
//    printf("%ld\n", nc);

//  V2
    // double nc;
    // for (nc = 0; getchar() != EOF; nc++)
    //     ;
    // printf ("%.0f\n", nc);

    printf("Chapter 1.5.2 End -----------------------------------------");


    printf("\n\nChapter 1.5.3 Start ---------------------------------------\n");
    // int c, nl;
    // nl = 0;
    // while ((c = getchar()) != EOF) {
    //     if (c == '\n')
    //         nl++;
    // }
    // printf("%d\n", nl);

// Exercise 1-8
    // int c, ns, nt, nl;
    // ns = nt = nl = 0;
    // while ((c = getchar()) != EOF) {
    //     if (c == ' ')
    //         ns++;
    //     if (c == '\t')
    //         nt++;
    //     if (c == '\n')
    //         nl++;
    // }
    // printf ("Spaces number is %d, Table number is %d, Line number is %d\n", ns, nt, nl);

// Exercise 1-9
    // int c;
    // char preCharIsSpace = 0;
    // while ((c = getchar()) != EOF) {
    //     if (c == ' ') {
    //         if (!preCharisSpace)
    //             putchar(c);
    //         preCharisSpace = 1;
    //     } else {
    //         putchar(c);
    //         preCharIsSpace = 0;
    //     }
    // }

// Exercise 1-10
    // int c;
    // while ((c = getchar()) != EOF) {
    //     if (c == '\t') {
    //         putchar('\\');
    //         putchar('t');
    //     }
 
    //     if (c == '\b') {
    //         putchar('\\');
    //         putchar('b');
    //     }

    //     if (c == '\\') {
    //         putchar('\\');
    //         putchar('\\');
    //     }
    // }    
    printf("Chapter 1.5.3 End -----------------------------------------");

    printf("\n\nChapter 1.5.4 Start ---------------------------------------\n");
    int c, nc, nl, nw, state;

    state = OUT;
    nc = nl = nw = 0;
    // while ((c = getchar()) != EOF) {
    // 	nc++;
    // 	if (c == '\n')
    // 		nl++;
    // 	if (c == ' ' || c == '\t' || c == '\n')
    // 		state = OUT;
    // 	else if (state == OUT) {
    // 		state = IN;
    // 		nw++;
    // 	}
    // }
    
    printf("Characters count is %d, Line count is %d, Word count is %d.\n", nc, nl, nw);
    printf("Chapter 1.5.4 End -----------------------------------------");


    printf("\n\nChapter 1.6 Start ---------------------------------------\n");

    printf("Chapter 1.6 End -----------------------------------------");

//    printf("\n\nChapter 1.4 Start ---------------------------------------\n");
//    printf("Chapter 1.4 End -----------------------------------------");
    return 0;
}
