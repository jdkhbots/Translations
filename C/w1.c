#include <stdio.h>
#include <ctype.h>

int main(){
    char adjective[20], animal[20], verb[20], excl[20], verb1[20], verb2[20], article[3], animal2[20];
    printf("Please enter the following: \n");
    printf("adjective: ");
    scanf("%s", adjective);
    printf("animal: ");
    scanf("%s", animal);
    printf("verb: ");
    scanf("%s", verb);
    printf("exclamation: ");
    scanf("%s", excl);
    excl[0] = toupper(excl[0]);
    printf("verb: ");
    scanf("%s", verb1);
    printf("verb: ");
    scanf("%s", verb2);
    printf("Another anmial: ");
    scanf("%s", animal2);

    if (animal2[0] == 'a' || animal2[0] == 'e' || animal2[0] == 'i' || animal2[0] == 'o' || animal2[0] == 'u' ) {
        snprintf(article, sizeof(article), "an");
    } else {
        snprintf(article, sizeof(article), "a");
    }



    printf("Your story is: \n\nThe other day, I was really in trouble. It all started when I saw a very %s %s %s down the hallway. \"%s!\" I yelled. But all I could think to do was to %s over and over. Miraculously, that caused it to stop, but not before it tried to %s right in front of my family. Oh, we also saw %s %s.", adjective, animal, verb, excl, verb1, verb2, article, animal2);

    return 0;

}