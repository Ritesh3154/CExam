#include <stdio.h>

struct Mobile
{
    char company_name[50];
    char color[50];
    char model[50];
    float price;
};

int main()
{
    int n;
    printf("enter number of mobile: ");
    scanf("%d", &n);

    struct Mobile m[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter company name : ");
        scanf("%s", &m[i].company_name);
        printf("enter color : ");
        scanf("%s", &m[i].color);
        printf("enter model : ");
        scanf("%s", &m[i].model);
        printf("enter price : ");
        scanf("%f", &m[i].price);
    }

    printf("mobile details : ");
    for (int i = 0; i < n; i++)
    {
        printf("company name: %s \n color: %s \n model: %s \n price: %2.f \n", m[i].company_name, m[i].color, m[i].model, m[i].price);
    }
    return 0;
}