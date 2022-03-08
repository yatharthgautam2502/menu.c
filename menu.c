int main()
{
     int a;
     printf("Enter any value between 1 to 5\n");
     scanf("%d", &a);
     switch(a)
     {
         case 1: 
         printf("Pizza, Rs 239\n");
         break;
     
         case 2: 
         printf("Burger, Rs 129\n");
         break;
         
         case 3:
         printf("Pasta, Rs 179\n");
         break;
         
         case 4:
         printf("French Fries, Rs 99\n");
         break;
         
         case 5:
         printf("Sandwich, Rs 149\n");
         break;
         
         default:
         printf("PLS ENTER VALUE BETWEEN 1-5\n");
         break;
     }
     return 0;
}
