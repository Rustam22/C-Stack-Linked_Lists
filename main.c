/// 
/// E) Big O notation is 
///
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100 // sample size for stack (can be changed)
#define STRING_SIZE 25
#pragma warning(disable : 4996)

typedef struct node
{
    int data;
    struct node* next; // Create Node structure for a save data of SAS(Student Automation System)
} Node;

struct node* head = NULL;
struct node* current = NULL;

typedef struct stack
{
    int top;
    Node* Adress[SIZE]; // Create Stack for a sorting purposes SAS
    int ID[SIZE];
} Stack;

void append_node(Node* head, int data);
void printList(Node* head)
{
    Node* tmp = head;
    for (; tmp; tmp = tmp->next)
    {
        if (tmp == head) printf("%d -> ", tmp->data);
        else printf("%c -> ", (char)tmp->data);
    }
}
void push_stack(Stack* s, int newID, Node* newadress);
void pop_stack(Stack* s, int newID, Node* newadress)
{

}
void add_student();
void sort_id() {}
void sort_names() {}
void sort_year() {}
void delete_record() {}
int str_length(char str[])
{
    int count;
    for (count = 0; str[count] != '\0'; ++count);
    return count;
}
int main(void) {
    int n, ch;
    Stack* s = NULL;
    s = (Stack*)malloc(sizeof(Stack));
    s->top = -1;
    do
    {
        printf("\n1.Enter school number \n2.Display school number sorted by ID\n3.Display school number sorted by year\n4.Display school number sorted by faculty code\n5.Delete a record by school number\n6.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add_student(s);
            break;
        case 2:
            sort_id();
            break;
        case 3:
            sort_names();
            break;
        case 4:
            sort_year();
            break;
        case 5:
            delete_record();
            break;
        default:
            printf("Please enter correct option");
        }
    } while (ch != 6);

    return 0;
}
void add_student(Stack* s)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    printf("Enter a student school number: ");
    int school_number;
    scanf("%d", &school_number);
    new->data = school_number;
    new->next = NULL;
    char str_nam[STRING_SIZE];
    char str_sur[STRING_SIZE];
    char stru[(2 * STRING_SIZE + 2)];
    printf("Enter a student name: ");
    scanf("%s", str_nam);
    printf("Enter a student surname: ");
    scanf("%s", str_sur);
    for (int i = 0; i < str_length(str_nam) + 1; i++)
    {
        stru[i] = str_nam[i];
        if(i == str_length(str_nam)) stru[i] = " ";
    }
    
    printf("%s", stru);
    printf("\n");
    for (int i = 0; i < str_length(stru); i++)
    {
        append_node(new, (int)stru[i]);
    }
    printList(new);
    push_stack(s, new->data, new);
    //for(int i = 0; i)
    //struct node* new = (struct node*)malloc(sizeof(struct node));
    //new->next
}
void append_node(Node* head, int data)
{
    Node* tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    };

    tmp->next = (Node*)malloc(sizeof(Node));
    tmp->next->data = data;
    tmp->next->next = NULL;
}
void push_stack(Stack* s, int newID, Node* newadress)
{
    s->top++;
    s->ID[s->top] = newID;
    s->Adress[s->top] = newadress;
}/// 
/// E) Big O notation is 
///
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100 // sample size for stack (can be changed)
#define STRING_SIZE 25
#pragma warning(disable : 4996)
typedef struct node
{
    int data;
    struct node* next; // Create Node structure for a save data of SAS(Student Automation System)
} Node;

struct node* head = NULL;
struct node* current = NULL;

typedef struct stack
{
    int top;
    Node* Adress[SIZE]; // Create Stack for a sorting purposes SAS
    int ID[SIZE];
} Stack;

void append_node(Node* head, int data);
void printList(Node* head)
{
    Node* tmp = head;
    for (; tmp; tmp = tmp->next)
    {
        if (tmp == head) printf("%d -> ", tmp->data);
        else printf("%c -> ", (char)tmp->data);
    }
}
void push_stack(Stack* s, int newID, Node* newadress);
void pop_stack(Stack* s, int newID, Node* newadress)
{

}
void add_student();
void sort_id() {}
void sort_names() {}
void sort_year() {}
void delete_record() {}
int str_length(char str[])
{
    int count;
    for (count = 0; str[count] != '\0'; ++count);
    return count;
}
int main(void) {
    int n, ch;
    Stack* s = NULL;
    s = (Stack*)malloc(sizeof(Stack));
    s->top = -1;
    do
    {
        printf("\n1.Enter school number \n2.Display school number sorted by ID\n3.Display school number sorted by year\n4.Display school number sorted by faculty code\n5.Delete a record by school number\n6.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add_student(s);
            break;
        case 2:
            sort_id();
            break;
        case 3:
            sort_names();
            break;
        case 4:
            sort_year();
            break;
        case 5:
            delete_record();
            break;
        default:
            printf("Please enter correct option");
        }
    } while (ch != 6);

    return 0;
}
void add_student(Stack* s)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    printf("Enter a student school number: ");
    int school_number;
    scanf("%d", &school_number);
    new->data = school_number;
    new->next = NULL;
    char str_nam[STRING_SIZE];
    char str_sur[STRING_SIZE];
    char stru[(2 * STRING_SIZE + 2)];
    printf("Enter a student name: ");
    scanf("%s", str_nam);
    printf("Enter a student surname: ");
    scanf("%s", str_sur);
    for (int i = 0; i < str_length(str_nam) + 1; i++)
    {
        stru[i] = str_nam[i];
        if(i == str_length(str_nam)) stru[i] = " ";
    }
    
    printf("%s", stru);
    printf("\n");
    for (int i = 0; i < str_length(stru); i++)
    {
        append_node(new, (int)stru[i]);
    }
    printList(new);
    push_stack(s, new->data, new);
    //for(int i = 0; i)
    //struct node* new = (struct node*)malloc(sizeof(struct node));
    //new->next
}

void append_node(Node* head, int data)
{
    Node* tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    };

    tmp->next = (Node*)malloc(sizeof(Node));
    tmp->next->data = data;
    tmp->next->next = NULL;
}

void push_stack(Stack* s, int newID, Node* newadress)
{
    s->top++;
    s->ID[s->top] = newID;
    s->Adress[s->top] = newadress;
}
