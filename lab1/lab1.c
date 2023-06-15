#include <stdio.h>
#include <string.h>

struct Pharmacy {
    char name[256];
    char state[81];
    char sub_state[121];
    int suplied_products;
    int returned_products;
};

typedef struct Pharmacy Pharmacy;

int sales(Pharmacy *p) {
    return p->suplied_products - p->returned_products;
}

int main() {
    FILE *fd = fopen("input.in", "r");
    int n;
    fscanf(fd, "%d\n", &n);

    Pharmacy pharmacies[n];
    for (int i = 0; i < n; ++i) {
        /*
        * %[a-zA-Z ] means: "read untill you can read 
        *                    only the characters mentioned inside the
        *                    square braces
        * Here a-z means: read all the characters between a to z
        * Here A-Z means: read all the characters between A to Z
        * And the space at the end means: read the spaces if encountered any
        */
        fscanf(fd, "%[a-zA-Z ],%[a-zA-Z ],%[a-zA-Z ],%d,%d\n", 
              pharmacies[i].name,
              pharmacies[i].state,
              pharmacies[i].sub_state,
              &pharmacies[i].suplied_products,
              &pharmacies[i].returned_products);
    }

    fclose(fd);

    /* 
     * Uncomment the code segment to print the read data
    for (int i = 0; i < n; ++i) {
        printf("%s,%s,%s,%d,%d\n", 
              pharmacies[i].name,
              pharmacies[i].state,
              pharmacies[i].sub_state,
              pharmacies[i].suplied_products,
              pharmacies[i].returned_products);
    }
    */

    /* Query1 */
    int max = sales(&pharmacies[0]);
    char state[256];
    strncpy(state, pharmacies[0].state, 255);
    state[strlen(pharmacies[0].state) - 1] = '\0'; // Explicitly placing null character
    for (int i = 1; i < n; ++i) {
        if (max < sales(&pharmacies[i])) {
            max = sales(&pharmacies[i]);
            strncpy(state, pharmacies[i].state, 255); // Copying only up to 255 characters
            state[strlen(pharmacies[i].state)-1] = '\0'; // Explicitly placing null character
                                                            // Don't trust C libraries
        }
    }

    printf("The state with maximum sales: '%s'\n", state);
}
