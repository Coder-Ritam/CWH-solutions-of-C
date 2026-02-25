#include <stdio.h>
#include <string.h>

/*Project Credit--- GeeeksForGeeks team C skill up course 2025 (free version) week 2 day 14 project*/
/*Project to create Contact book application using C*/

#define MAX 100
// creating two(2d array) global variables to store values of phone and names
char names[MAX][100];
char phones[MAX][15];

int count = 0;

// creating a function to check whether the given contact is valid
/*To do :-
 (1)remove the null character from the phone number
 (2)length must be between 4 and 14
 (3)check if all the entered digits(chars) are numbers(0-9)
*/
int isValidPhone(const char *phone)
{
    int length = strlen(phone);
    if (length < 7 || length > 14)
    {
        return 0;
    }
    int i;
    for (i = 0; i < length; i++)
    {
        if (phone[i] < '0' || phone[i] > '9')
        {
            return 0;
        }
    }
    return 1;
}
// creating a function to  delete the newline character which gets added automatically in fgets
void NewLineTrim(char *str)
{
    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }
}
// function to add new contact
void addContact()
{
    if (count >= MAX)
    {
        printf("you have surpassed your contact limit\n");
        return;
    }
    printf("Enter the name: ");
    fgets(names[count], sizeof(names[count]), stdin);
    NewLineTrim(names[count]);

    while (1)
    {
        printf("Enter the phone number ");
        fgets(phones[count], sizeof(phones[count]), stdin);
        NewLineTrim(phones[count]);

        if (isValidPhone(phones[count]))
        {
            break;
        }
        else
        {
            printf("The entered phone number is incorrect! It must be beteween 7-14 digits and contain only numbers\n");
        }
    }
    printf("contact added successfully\n");
    count++;
}
// function to display the contacts if the  contact list is not empty
void display()
{
    if (count == 0)
    {
        printf("the contact list is empty! \n");
        return;
    }
    printf("\n---CONTACT LIST---\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. Names: %s ,Phone Number: %s \n", i + 1, names[i], phones[i]);
    }
}
// use a recursive function to search the name in the contact list
int searchByName(int index, const char *query)
{
    if (index == count)
    {
        return -1;
    }
    if (strcmp(names[index], query) == 0)
    {
        return index;
    }
    return searchByName(index + 1, query);
}
// recursive function for searching by phone number
int searchByPhone(int index, const char *query)
{
    if (index == count)
    {
        return -1;
    }
    if (strcmp(phones[index], query) == 0)
    {
        return index;
    }
    return searchByPhone(index + 1, query);
}
// function to delete the function
void deleteContact()
{
    int index;
    int index2;
    char query[100];

    printf("Enter the Name to be deleted: ");
    fgets(query, sizeof(query), stdin);
    NewLineTrim(query);

    index = searchByName(0, query);
    if (index == -1)
    {
        printf("Sorry!Contact Not Found");
        return;
    }
    if (index == count - 1)
    {
        count--;
    }
    else
    {
        strcpy(names[index], names[count - 1]);
        strcpy(phones[index], phones[count - 1]);
        count--;
    }
    printf("contact deleted successfully");
}
// dashboard
int main()
{
    int choice;
    char query[100];
    int index;

    while (1)
    {
        printf("\n--- Contact Book Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Search by Name\n");
        printf("3. Search by Phone\n");
        printf("4. Display All Contacts\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear leftover newline from input buffer
        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            printf("Enter name to search: ");
            fgets(query, sizeof(query), stdin);
            NewLineTrim(query);
            index = searchByName(0, query);
            if (index == -1)
                printf("Contact not found.\n");
            else
                printf("Found: Name: %s, Phone: %s\n", names[index], phones[index]);
            break;

        case 3:
            printf("Enter phone number to search: ");
            fgets(query, sizeof(query), stdin);
            NewLineTrim(query);
            index = searchByPhone(0, query);
            if (index == -1)
                printf("Contact not found.\n");
            else
                printf("Found: Name: %s, Phone: %s\n", names[index], phones[index]);
            break;

        case 4:
            display();
            break;

        case 5:
            deleteContact();
            break;

        case 6:
            printf("Exiting Contact Book. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
