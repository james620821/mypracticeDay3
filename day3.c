#include <stdio.h>
int main()
{
    // 3>2>1 True or False? A:False, �ѥ��ܥk�P�_3>2-->1 then 1>1-->Flase (�v��3-4)
    // 3>2 and 2>1 -->�Y�Q��and��#include <iso646.h>
    // ���@��`��&&�Ӥ��Oand
    // �޿�B��(&& ||)�|��short circuit evaluation (�v��3-5)

    //�v��4-3�m��{���B�馩�m��}
    /*
    int people;
    double cost;
    printf("How many people are there at a table? ");
    scanf("%d", &people);
    cost = people * 300;
    if (cost >= 3000)
    {
        cost = cost * 0.8;
    }
    printf("The tatal cost is %f\n", cost);
    */
    //�v��4-4�m��{���T���ΧP�_�m��}
    /*
    int side1, side2, side3;
    printf("Please enter the lengths: ");
    //scanf("%d%d%d", &side1, &side2, &side3);
    scanf("%d",&side1);
    scanf("%d",&side2);
    scanf("%d",&side3);
    if ((side1 == side2) && (side2 == side3))
    {
        printf("Regular triangle\n");
    }
    */
    //�v��4-5�m��{���y�T���ΧP�_�m��}
    /*
    int side1, side2, side3;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    if ((side1 == side2) || (side2 == side3) || (side1 == side3))
    {
        printf("Isosceles triangle\n");
    }
    */
    /*
    //�v��4-6�m��{�����T���ΧP�_�m��}
    int side1, side2, side3;
    int temp;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    //side1 =side1*side1;
    //printf("%d",side1);
    if ((side2 - side1)>0 && (side2 - side3)>0)
    {
        temp = side1;
        side1 = side2;
        side2 = temp;
    }
    if ((side3 -side2) >0 && (side3 - side1)>0)
    {
        temp = side1;
        side1 = side3;
        side3 = temp;
    }
    if (side1*side1 == (side2*side2 + side3*side3))
    {
        printf("Rectangular triangle\n");
    }
    */

    return 0;
}
