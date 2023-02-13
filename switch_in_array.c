#include <stdio.h>
int main()
{
    int a[10], i, ch, n, e, p;
    do
    {

        printf("\n 1.find position");
        printf("\n 2.value swapping");
        printf("\n 3.add element in back");
        printf("\n 4.add element in front");
        printf("\n 5.delet first element");
        printf("\n 6.delet middel element");
        printf("\n 7.delet last element");

        printf("\nenter your choice:");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:

            printf("\nenter n:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nenter a[%d]:", i);
                scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            printf("\nenter element:");
            scanf("%d", &e);
            for (i = 0; i < n; i++)
            {
                if (a[i] == e)

                {
                    printf("element is:%d", i);
                }
            }
            break;

        case 2:

            printf("\nenter n:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nenter a[%d]:", i);
                scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            printf("\nenter position:");
            scanf("%d", &p);
            printf("\nenter element:");
            scanf("%d", &e);

            for (i = 0; i < n; i++)
            {
                if (i == p)
                {
                    (a[i] = e);
                }
                // printf("\na[%d]:%d",i,a[i]);
            }
            for (i = 0; i < n; i++)
                printf("\na[%d]:%d", i, a[i]);
            break;

        case 3:

            printf("\nenter n:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nenter a[%d]:", i);
                scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            printf("\nenter element:");
            scanf("%d", &e);
            a[n] = e;

            for (i = 0; i < n + 1; i++)

            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            break;

        case 4:

            printf("\nenter n:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nenter a[%d]:", i);
                scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            printf("\nenter element:");
            scanf("%d", &e);

            for (int i = n + 1; i > p; i--)
                a[i] = a[i - 1];
            a[p] = e;
            printf("Array after updated:\n");
            for (int i = p; i < n + 1; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
                // printf("%d ", a[i]);
            }
            break;

        case 5:

            printf("\nenter n:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nenter a[%d]:", i);
                scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }

            // printf("\nupadated array");
            for (i = p; i < n - 1; i++)

                a[i] = a[i + 1];
            // a[p] = e;

            printf("\nupadated array");
            for (i = 0; i < n - 1; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            break;

        case 6:

            printf("\nenter n:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nenter a[%d]:", i);
                scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            printf("\nenter position:");
            scanf("%d", &p);

            for (i = p; i < n - 1; i++)
                a[i] = a[i + 1];

            printf("upadated array");
            for (i = 0; i < n - 1; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            break;

        case 7:
            printf("\nenter n:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nenter a[%d]:", i);
                scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            // printf("\nenter position:");
            // scanf("%d", &p);

            // printf("\nenter element:");
            // scanf("%d", &e);
            printf("\nupadated array");
            for (i = n - 1; i > n; i--)

                a[i] = a[i - 1];
            // a[p] = e;

             printf("\nupadated array");
            for (i = 0; i < n - 1; i++)
            {
                printf("\n a[%d]:%d", i, a[i]);
            }
            break;
        default:
            printf("wrong choice");
        }
    }

    while (ch != 8);
}
