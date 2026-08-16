#include <stdio.h>

#define MAX_ITEMS 10
#define MAX_ORDER 20

typedef struct {
    int id;
    char name[50];
    float price;
} MenuItem;

typedef struct {
    char name[50];
    float price;
    int quantity;
} OrderItem;

void seeKioskMenu();
void exitUser();
void seeKioskInfo();
void orderFood();
void showReceipt();

MenuItem menu[MAX_ITEMS] = {
    {1, "Chickenjoy 1pc", 99.00},
    {2, "Yumburger", 35.00},
    {3, "Jolly Spaghetti", 59.00},
    {4, "Peach Mango Pie", 39.00},
    {5, "Coke Regular", 39.00}
};
int menuCount = 5;

OrderItem order[MAX_ORDER];
int orderCount = 0;

int main() {

    while(1) {

        int choice = 0;

        printf("\n====== JOLLIBEE MENU ======\n");
        printf("\n1. See All Menu");
        printf("\n2. Order Food");
        printf("\n3. See Info");
        printf("\n4. View Receipt");
        printf("\n5. Exit\n");
        printf("\n===========================\n");
        printf("\nType Your Choice (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                seeKioskMenu();
                break;

            case 2:
                orderFood();
                break;

            case 3:
                seeKioskInfo();
                break;

            case 4:
                showReceipt();
                break;

            case 5:
                exitUser();
                return 0;

            default:
                printf("\nInvalid Choice, please try again!\n");
                break;
        }
    }

    return 0;
}

void seeKioskMenu() {
    printf("\n===== MENU =====\n");
    for (int i = 0; i < menuCount; i++) {
        printf("%d. %-20s ₱%.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
    printf("=================\n");
}

void orderFood() {
    seeKioskMenu();

    if (orderCount >= MAX_ORDER) {
        printf("\nOrder list is full!\n");
        return;
    }

    int pick, qty;
    printf("\nEnter item number to order (0 to cancel): ");
    scanf("%d", &pick);

    if (pick == 0) return;

    if (pick < 1 || pick > menuCount) {
        printf("\nInvalid item number!\n");
        return;
    }

    printf("Enter quantity: ");
    scanf("%d", &qty);

    if (qty <= 0) {
        printf("\nInvalid quantity!\n");
        return;
    }

    MenuItem selected = menu[pick - 1];

    order[orderCount].price = selected.price;
    order[orderCount].quantity = qty;
    snprintf(order[orderCount].name, sizeof(order[orderCount].name), "%s", selected.name);
    orderCount++;

    printf("\nAdded: %dx %s to your order!\n", qty, selected.name);
}

void showReceipt() {
    if (orderCount == 0) {
        printf("\nYour order is empty.\n");
        return;
    }

    float total = 0;
    printf("\n===== YOUR ORDER =====\n");
    for (int i = 0; i < orderCount; i++) {
        float lineTotal = order[i].price * order[i].quantity;
        printf("%dx %-20s ₱%.2f\n", order[i].quantity, order[i].name, lineTotal);
        total += lineTotal;
    }
    printf("=======================\n");
    printf("TOTAL: ₱%.2f\n", total);
    printf("=======================\n");
}

void seeKioskInfo() {
    printf("\n===== JOLLIBEE INFO =====\n");
    printf("Welcome to Jollibee - Bee Happy!\n");
    printf("Founded: 1978\n");
    printf("Branch: Davao Downtown Kiosk #007\n");
    printf("Operating Hours: 6:00 AM - 11:00 PM\n");
    printf("Hotline: (082) 123-4567\n");
    printf("Tagline: \"Langhap Sarap!\"\n");
    printf("===========================\n");
}

void exitUser() {
    printf("\nThank you for coming!\n");
}
