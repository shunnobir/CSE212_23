struct Node {
    char name[256];
    char state[81];
    char sub_state[121];
    int ps;
    int rs;
    struct Node *next;
};

int main() {
    struct Node *head = malloc(sizeof(struct Node));
    head->ps = 10;
    head->rs = 5;
    int len = strlen("Ma Pharmacy");
    strcpy(head->name, "Ma Pharmacy");
    head->name[len] = '\0';
    head->name[strlen(head->name)] = '\0';
}
