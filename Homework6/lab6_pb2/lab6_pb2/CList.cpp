#include "CList.h"

void list::Add(node **head, int v) {
    node* new_node = new node(v);
    new_node->next = *head;
    *head = new_node;
}

void list::Print(node *node) {
    printf("\n List: ");
    while (node != NULL) {
        printf("%d ", node->val);
        node = node->next;
    }
    cout << endl;
}

void list::HelpDelete (node** head, int key)
{
    node* temp = *head;
    node* prev = nullptr;
    if (temp != NULL
        && temp->val == key) {
        *head = temp->next;
        return;
    }


    while (temp != NULL
        && temp->val != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;


}

void list::Delete1(node** head, int k)
{
    node* ptr = *head;

    while (ptr != NULL) {
        if (ptr->val == k)
            HelpDelete(head, ptr->val);
        ptr = ptr->next;
    }
}

void list::Delete2(node** head, int k)
{
    node* ptr = *head;

    while (ptr != NULL) {
        if (ptr->val < k)
            HelpDelete(head, ptr->val);
        ptr = ptr->next;
    }
}
int list::medie_aritmetica(node** head) {
    node* ptr = *head;
    float nr = 0, suma = 0;
    float medie=0.0;
    while (ptr != NULL) {
        nr++;
        suma = suma + ptr->val;
        ptr = ptr->next;
    } 
    medie = (float)(suma / nr);
    return medie;
}